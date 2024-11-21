main: main.o Box.o
	g++ main.o Box.o -o main

main.o: main.cpp Box.h
	g++ -c main.cpp

Box.o: Box.h Box.cpp
	g++ -c Box.cpp

clean:
	rm -f main *.o