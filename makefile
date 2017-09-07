FLAGS=-g -std=c++11 -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -O2
CC=g++

all: countsort main clean

main:
	$(CC) $(FLAGS) -c main.cpp
	$(CC) $(FLAGS) -o CountSort countsort.o main.o

countsort: countsort.cpp
	$(CC) $(FLAGS) -c countsort.cpp

clean:
	rm -f *.o
	rm -f *.stackdump
