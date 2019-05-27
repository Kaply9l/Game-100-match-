CFLAGS = -Wall -Werror
COMPILER = g++ -std=c++11
OBJ = $(COMPILER) $(CFLAGS) -c $< -o $@

all: target1 target2 target3 bin/100.exe

target1:
	mkdir -p bin
target2:
	mkdir -p build
target3:
	mkdir -p build/src

bin/100.exe: build/src/main.o build/src/people_choise.o build/src/comp_choise.o
	$(COMPILER) $(CFLAGS) $^ -o $@

build/src/main.o: src/main.cpp src/head.h
	$(OBJ)

build/src/people.o: src/people_choise.cpp src/head.h
	$(OBJ)

build/src/comp.o: src/comp_choise.cpp src/head.h
	$(OBJ)

clean:
	rm -R build/src/*.o
	rm -R bin/100.exe
	rm -R build
	rm -R bin
