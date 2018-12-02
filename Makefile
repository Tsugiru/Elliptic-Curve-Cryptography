CC=g++
INCLUDEDIR=./include
SOURCEDIR=./src
BINDIR=./bin
CFLAGS=-I$(INCLUDEDIR) -std=c++11

OBJFILES= $(patsubst $(SOURCEDIR)/%.cpp, $(SOURCEDIR)/%.o, $(wildcard $(SOURCEDIR)/*.cpp))
DEPS= $(wildcard $(INCLUDEDIR)/*.h)

$(SOURCEDIR)/%.o : $(SOURCEDIR)/%.cpp $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

$(BINDIR)/ecc : $(OBJFILES)
	mkdir -p bin
	$(CC) -g -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -rf $(SOURCEDIR)/*.o