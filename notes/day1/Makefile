all: cpp-notes.pdf

cpp-notes.pdf: cpp-notes.tex update_code
	pdflatex cpp-notes
	pdflatex cpp-notes
	bibtex cpp-notes
	pdflatex cpp-notes
	pdflatex cpp-notes

update_code: code/code_was_updated
	$(MAKE) -C code -D PROCESS_CODE=../../process-code.py

clean:
	rm -f *.{pdf,aux,log}

read: cpp-notes.pdf
	acroread cpp-notes.pdf
