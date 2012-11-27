all: cpp-notes.pdf

cpp-notes.pdf: cpp-notes.tex
	pdflatex cpp-notes
	pdflatex cpp-notes
	bibtex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

clean:
	rm -f *.{pdf,aux,log}

read: cpp-notes.pdf
	acroread cpp-notes.pdf
