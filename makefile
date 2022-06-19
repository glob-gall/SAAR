# g++ -c src/*.cpp
all:
	g++ -c src/Class/Categoria/*.cpp
	g++ -c src/Class/Cardapio/*.cpp
	g++ -c src/Class/Item/*.cpp
	g++ -c src/Class/Mesa/*.cpp
	g++ -c src/Class/Pedido/*.cpp
	g++ -c src/Class/*/*.cpp
	g++ -o main main.cpp index.o
	./main
clear:
	rm *.o output