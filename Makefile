all: modal 

F = -g -Wall

modal: main.o model.o sat.o formula.o io.o 
	gcc main.o io.o model.o sat.o formula.o $F -o modal

main.o: src/main.c
	gcc src/main.c $F -c

formula.o: src/formula.c header/formula.h
	gcc src/formula.c $F -c

io.o: src/io.c header/io.h
	gcc src/io.c $F -c 

model.o: src/model.c header/model.h
	gcc src/model.c $F -c

sat.o: src/sat.c header/sat.h
	gcc src/sat.c $F -c


clear:
	rm *.o
