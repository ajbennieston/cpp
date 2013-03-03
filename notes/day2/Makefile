all: cpp-notes.pdf

.PHONY : all clean code

cpp-notes.pdf: cpp-notes.tex code
	pdflatex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

clean:
	rm -f *.aux *.log *.out *.bbl
	rm -f *.blg *.toc cpp-notes.pdf
	$(MAKE) -C code clean

code:
	$(MAKE) -C code PROCESS_CODE=../../process-code.py

read: cpp-notes.pdf
	acroread cpp-notes.pdf &
