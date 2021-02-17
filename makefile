CC = g++

prog: main.o Fraction.o mathUtils.o Point.o Line.o
	$(CC) main.o Fraction.o mathUtils.o Point.o Line.o -o prog

main.o: main.cpp
	$(CC) -c main.cpp

Fraction.o: Fraction.cpp
	$(CC) -c Fraction.cpp

mathUtils.o: mathUtils.cpp
	$(CC) -c mathUtils.cpp

Point.o: Point.cpp
	$(CC) -c Point.cpp

Line.o: Line.cpp
	$(CC) -c Line.cpp

clean: 
	rm main.o, Fraction.o, mathUtils.o, Point.o, Line.o