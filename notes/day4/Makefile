all: cpp-notes.pdf

cpp-notes.pdf: cpp-notes.tex bibliography.bib
	pdflatex cpp-notes
	pdflatex cpp-notes
	bibtex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

clean:
	rm -f *.aux
	rm -f *.log
	rm -f *.out
	rm -f *.blg
	rm -f *.bbl
	rm -f *.toc
	rm -f cpp-notes.pdf

read: cpp-notes.pdf
	acroread cpp-notes.pdf
