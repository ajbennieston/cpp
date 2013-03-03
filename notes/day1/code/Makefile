CPPFILES:=$(wildcard *.cpp)
TEXFILES:=$(patsubst %.cpp,%.tex,$(wildcard *.cpp))
PROGRAM_FILES:=$(patsubst %.cpp,%,$(wildcard *.cpp))

.PHONY: all clean 

all: $(TEXFILES)

%.tex: %.cpp
	$(PROCESS_CODE) $^

clean:
	rm -f $(TEXFILES)
	rm -f $(PROGRAM_FILES)
