all: modal 

F = -g -Wall

modal: main.o io.o model.o
	gcc main.o io.o model.o $F -o modal

main.o: src/main.c
	gcc src/main.c $F -c

io.o: src/io.c header/io.h
	gcc src/io.c $F -c 

model.o: src/model.c header/model.h
	gcc src/model.c $F -c

clear:
	rm *.o
