all: cpp-notes.pdf

.PHONY: all clean code

cpp-notes.pdf: cpp-notes.tex bibliography.bib code
	pdflatex cpp-notes
	pdflatex cpp-notes
	bibtex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

code:
	$(MAKE) -C code PROCESS_CODE=../../process-code.py

clean:
	rm -f cpp-notes.pdf *.aux *.log *.lot
	rm -f *.bbl *.blg *.out *.toc
	$(MAKE) -C code clean

read: cpp-notes.pdf
	acroread cpp-notes.pdf &
