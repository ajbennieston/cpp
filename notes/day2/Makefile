all: cpp-notes.pdf

.PHONY : all clean code

cpp-notes.pdf: cpp-notes.tex code
	latexmk -bibtex -pdf cpp-notes

clean:
	latexmk -C
	$(MAKE) -C code clean

code:
	$(MAKE) -C code PROCESS_CODE=../../process-code.py

read: cpp-notes.pdf
	acroread cpp-notes.pdf &
