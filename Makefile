CFLAGS = -Wall -Werror
compilator = g++ -std=c++11
srcOB = $(compilator) $(CFLAGS) -c $< -o $@
testOB = $(compilator) $(CFLAGS) -I testing/catch2 -c $< -o $@ 

all: target1 target2 target3 target4 bin/100.exe

target1:
	mkdir -p bin
target2:
	mkdir -p build
target3:
	mkdir -p build/src
target4:
	mkdir -p build/test


bin/100.exe: build/src/main.o build/src/people_choise.o build/src/comp_choise.o
	$(compilator) $(CFLAGS) $^ -o $@

build/src/main.o: src/main.cpp src/head.h
	$(srcOB)

build/src/people_choise.o: src/people_choise.cpp src/head.h
	$(srcOB)

build/src/comp_choise.o: src/comp_choise.cpp src/head.h
	$(srcOB)

bin/test100: build/test/test.o build/test/comp-test.o build/test/people-test.o
	$(compilator) $(CFLAGS) $^ -o $@

build/test/test.o: test/test.cpp test/head-test.h
	$(testOB)

build/test/comp-test.o: test/comp-test.cpp test/head-test.h
	$(testOB)

build/test/people-test.o: test/people-test.cpp test/head-test.h
	$(testOB)

clean:
	rm -R build/src/*.o
	rm -R bin/100.exe
	rm -R build
	rm -R bin
