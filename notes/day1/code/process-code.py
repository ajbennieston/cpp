#!/usr/bin/env python

import os
import subprocess
import sys

cxx = 'clang++'
cxxflags = '-std=c++98 -pedantic -Wall -Wextra -Werror'
cxxflags += ' -Woverloaded-virtual -Wfatal-errors -Wwrite-strings'
cxxflags += ' -fstrict-aliasing -fno-gnu-keywords'

def write_texfile(filename):
    with open(filename.replace('cpp', 'tex'), 'w') as texfile:
        texfile.write('\\begin{lstlisting}\n')
        include = False
        for line in open(filename, 'r'):
            if line.strip().startswith('// NOTES: BEGIN INCLUSION'):
                include = True
                continue
            elif line.strip().startswith('// NOTES: END INCLUSION'):
                include = False
                continue
            elif include:
                texfile.write(line)
            else:
                continue
        texfile.write('\\end{lstlisting}\n')

def test_file(filename, cxx, cxxflags):
    do_compile = False
    compile_should_succeed = False
    do_run = False
    run_should_succeed = False
    ignore_unused_variables = False
    std_input = None

    in_first_comment = False
    for line in open(filename, 'r'):
        ll = line.strip().lower()
        if ll.startswith('/*'):
            in_first_comment = True
        elif in_first_comment and ll.startswith('*/'):
            break # First comment is over
        elif 'compile: y' in ll:
            do_compile = True
        elif 'compile should succeed: y' in ll:
            compile_should_succeed = True
        elif 'run: y' in ll:
            do_run = True
        elif 'run should succeed: y' in ll:
            run_should_succeed = True
        elif 'ignore unused variables: y' in ll:
            ignore_unused_variables = True
        elif 'input' in ll:
            parts = line.split(':')
            std_input = parts[1]
        else:
            continue # ignore other comment lines

    if do_compile:
        command = cxx + ' ' + cxxflags + ' -o '
        command += '%s' % filename.replace('.cpp', '')
        command += ' %s' % filename
        if ignore_unused_variables:
            command += ' -Wno-unused-variable'
        print command
        ret = os.system(command)
        if compile_should_succeed and ret != 0:
            print 'Compile failed for %s ' % filename
            sys.exit(1)
        if do_run:
            cmd_name = './%s' % filename.replace('.cpp', '')
            if std_input is not None:
                # use subprocess module to pipe stdin to the program
                p = subprocess.Popen([cmd_name],
                        stdin=subprocess.PIPE,
                        stdout=subprocess.PIPE,
                        stderr=subprocess.STDOUT)
                stdout, stderr = p.communicate(input=std_input)
                if len(stdout):
                    print stdout
                ret = p.returncode
            else:
                ret = os.system('./%s' % filename.replace('.cpp', ''))
            if run_should_succeed and ret != 0:
                print 'Run failed for %s ' % filename
                sys.exit(1)

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print 'Usage: %s filename' % sys.argv[0]
        sys.exit(1)
    filename = sys.argv[1]
    test_file(filename, cxx, cxxflags)
    write_texfile(filename)
