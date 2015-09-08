#ifndef FORMULA_H
#define FORMULA_H

#include "io.h"

typedef struct operador{
	int type;
}operador;

typedef struct prop_atomic{
	char c;
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

#endif //FORMULA_H
