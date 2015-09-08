#include "../header/formula.h"


void formula_init(formula *f)
{
	f->size = 0;
	error.type = -1;
}

item_f formula_top(formula *f)
{
	if(f->size == 0)
	{
		print(FORMULA_VAZIA);
		return error;
	}
	return f->claus[f->size - 1];
}

void formula_push(formula *f, item_f d)
{
	f->claus[f->size++] = d;
}

void formula_pop(formula *f)
{
	if(f->size == 0)
		print(FORMULA_VAZIA);
	else
		f->size--;
}
