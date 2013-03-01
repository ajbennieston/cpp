#!/usr/bin/env python

import os
import sys

cxx = 'clang++'
cxxflags = '-std=c++98 -pedantic -Wall -Wextra -Werror -Woverloaded-virtual -Wfatal-errors -Wwrite-strings -fstrict-aliasing -fno-gnu-keywords'

def write_texfile(filename):
    with open(filename.replace('cpp', 'tex'), 'w') as texfile:
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

def test_file(filename):
    do_compile = False
    compile_should_succeed = False
    do_run = False
    run_should_succeed = False

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
        else:
            continue # ignore other comment lines

    if do_compile:
        command = cxx + ' ' + cxxflags + ' -o '
        command += '%s' % filename.replace('.cpp', '')
        command += ' %s' % filename
        ret = os.system(command)
        if compile_should_succeed and ret != 0:
            print 'Compile failed for %s ' % filename
            sys.exit(1)
        if do_run:
            ret = os.system('./%s' % filename.replace('.cpp', ''))
            if run_should_succeed and ret != 0:
                print 'Run failed for %s ' % filename
                sys.exit(1)

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print 'Usage: %s filename' % sys.argv[0]
        sys.exit(1)
    filename = sys.argv[1]
    test_file(filename)
    write_texfile(filename)
