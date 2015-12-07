NOTES_SUBPROJECTS := day1 day2 day3 day4 day5
PROCESS_CODE := ./process-code.py
LATEXMK := latexmk -bibtex -pdf -pdflatex="pdflatex --shell-escape"

.PHONY: all clean

all: $(patsubst %,%/cpp-notes.pdf,$(NOTES_SUBPROJECTS))

clean:
	for subdir in $(NOTES_SUBPROJECTS) ; do \
		cd $$subdir && latexmk -C && cd - ; \
	done
	rm -f $(patsubst %.cpp,%.tex,$(wildcard */code/*.cpp))
	rm -f $(patsubst %.cpp,%,$(wildcard */code/*.cpp))

%.tex: %.cpp
	$(PROCESS_CODE) $^

day1/cpp-notes.pdf: day1/cpp-notes.tex $(patsubst %.cpp,%.tex,$(wildcard day1/code/*.cpp))
	cd $(dir $@) && $(LATEXMK) cpp-notes

day2/cpp-notes.pdf: day2/cpp-notes.tex $(patsubst %.cpp,%.tex,$(wildcard day2/code/*.cpp))
	cd $(dir $@) && $(LATEXMK) cpp-notes

day3/cpp-notes.pdf: day3/cpp-notes.tex $(patsubst %.cpp,%.tex,$(wildcard day3/code/*.cpp))
	cd $(dir $@) && $(LATEXMK) cpp-notes

day4/cpp-notes.pdf: day4/cpp-notes.tex $(patsubst %.cpp,%.tex,$(wildcard day4/code/*.cpp))
	cd $(dir $@) && $(LATEXMK) cpp-notes

day5/cpp-notes.pdf: day5/cpp-notes.tex $(patsubst %.cpp,%.tex,$(wildcard day5/code/*.cpp))
	cd $(dir $@) && $(LATEXMK) cpp-notes
