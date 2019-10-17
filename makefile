all: functions.o main.o
	gcc -o program functions.o main.o

functions.o: functions.c functions.h
	gcc -c functions.c

main.o: functions.h main.c
	gcc -c main.c

run:
	./program

clean:
	rm *.o
	rm *~
