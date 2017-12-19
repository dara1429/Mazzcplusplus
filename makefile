output: main.o rooms.o
	g++ -std=c++0x -Wall main.o rooms.o -o output

main.o: main.cpp
	g++ -c main.cpp

rooms.o: rooms.cpp rooms.h
	g++ -c rooms.cpp

clean:
	rm *.o output
