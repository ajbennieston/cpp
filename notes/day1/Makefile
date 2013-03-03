all: cpp-notes.pdf

.PHONY: all clean code

cpp-notes.pdf: cpp-notes.tex code 
	pdflatex cpp-notes
	pdflatex cpp-notes
	bibtex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

code:
	$(MAKE) -C code PROCESS_CODE=../../process-code.py

clean:
	rm -f *.{pdf,aux,log}
	$(MAKE) -C code clean

read: cpp-notes.pdf
	acroread cpp-notes.pdf
