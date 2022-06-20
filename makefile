# g++ -c src/*.cpp
all:
	g++ -c src/Class/*/*.cpp
	g++ -o main main.cpp index.o
	./main
clear:
	rm *.o output