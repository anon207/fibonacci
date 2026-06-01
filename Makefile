CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude

all: main

main: src/main.o src/fibonacci.o
	$(CXX) src/main.o src/fibonacci.o -o main

src/main.o: src/main.cc include/fibonacci.h
	$(CXX) $(CXXFLAGS) -c src/main.cc -o src/main.o

src/fibonacci.o: src/fibonacci.cc include/fibonacci.h
	$(CXX) $(CXXFLAGS) -c src/fibonacci.cc -o src/fibonacci.o

clean:
	del /q src\*.o main.exe
