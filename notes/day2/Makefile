.PHONY : all clean

all: cpp-notes.pdf

cpp-notes.pdf: cpp-notes.tex
	pdflatex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

clean:
	rm -f *.{pdf,aux,log}
	rm -f *.{out,bbl,blg,toc}

read: cpp-notes.pdf
	okular cpp-notes.pdf &
