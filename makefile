CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Date.o employee.o Programmer.o SoftwareArchitect.o

all: main

main: main.cpp Date.o employee.o Programmer.o SoftwareArchitect.o
	$(CC) $(FLAGS) main.cpp -o main $(OBJS)

Date.o: Date.cpp Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

employee.o: employee.cpp employee.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o

Programmer.o: Programmer.cpp Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o

clean:
	rm *.o main main.tar

tar:
	tar cf main.tar main.scr makefile main.cpp employee.cpp employee.h Date.cpp Date.h Programmer.cpp Programmer.h SoftwareArchitect.cpp SoftwareArchitect.h
