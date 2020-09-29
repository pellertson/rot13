CXX=@g++
CXXFLAGS=-O2 -Wall
SOURCES=rot13.cpp
EXE=rot13

$(EXE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm $(EXE)

test: $(EXE)
	echo "abcnopABCNOP123 .la" | ./$(EXE)

install: $(EXE)
	cp $^ /usr/local/bin