#ifndef FORMULA_H
#define FORMULA_H

#include "io.h"
#include "operadores.h"

#define OPERANDO 0
#define PROP_ATOMIC 1
#define PARENTHESIS 2



typedef struct operador{
	int type;
}operador;

typedef struct prop_atomic{
	char name;
}prop_atomic;

typedef struct item_f{
	int type; // 0 = prop , 1 = op
	operador op;
	prop_atomic prop;
}item_f;

typedef struct formula{
	item_f* claus;
	int size;

}formula;

item_f error; 

void formula_init(formula *f);
item_f formula_top(formula *f);
void formula_push(formula *f, item_f d);
void formula_pop(formula *f);
void insert_formula(char c, formula *f);
int type_of_data(char c);
int type_operador(char c);

#endif //FORMULA_H
