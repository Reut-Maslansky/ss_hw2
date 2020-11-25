.PHONY: all clean
all: main myBank.o libMyBank.a

libMyBank.a: myBank.o
	ar -rcs libMyBank.a myBank.o

main: main.o libMyBank.a
	gcc -Wall main.o libMyBank.a -o main
	
main.o: myBank.h main.c
	gcc -Wall -c main.c
myBank.o: myBank.c myBank.h
	gcc -Wall -c myBank.c
clean:
	rm -f *.o main *.a
