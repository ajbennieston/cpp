all: cpp-notes.pdf

cpp-notes.pdf: cpp-notes.tex
	pdflatex cpp-notes
	pdflatex cpp-notes
	#bibtex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

clean:
	rm -f *.aux
	rm -f *.log
	rm -f *.toc
	rm -f *.out
	rm -f cpp-notes.pdf

read: cpp-notes.pdf
	acroread cpp-notes.pdf
