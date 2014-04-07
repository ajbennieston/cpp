all: cpp-notes.pdf

.PHONY: all clean code

cpp-notes.pdf: cpp-notes.tex code 
	latexmk -bibtex -pdf cpp-notes

code:
	$(MAKE) -C code PROCESS_CODE=../../process-code.py

clean:
	latexmk -C
	$(MAKE) -C code clean

read: cpp-notes.pdf
	acroread cpp-notes.pdf
