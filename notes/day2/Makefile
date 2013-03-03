all: cpp-notes.pdf

.PHONY : all clean code

cpp-notes.pdf: cpp-notes.tex code
	pdflatex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

clean:
	rm -f *.{pdf,aux,log}
	rm -f *.{out,bbl,blg,toc}
	$(MAKE) -C code clean

code:
	$(MAKE) -C code PROCESS_CODE=../../process-code.py

read: cpp-notes.pdf
	acroread cpp-notes.pdf &
