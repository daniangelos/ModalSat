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

void insert_formula(char c, formula *f)
{
	item_f item;
	switch(type_of_data(c))
	{
		case PROP_ATOMIC:
			item.type = 0;
			item.prop.name = c;
			break;
		case OPERANDO:
			item.type = 1;
			item.op.type = is_operator(&c);
			break;
		case PARENTHESIS:
			break;
		default:
			print(ERRO_INPUT_FILE);
			break;
	}

	formula_push(f, item);
}

int type_of_data(char c)
{
	return 0;
}

int is_operator(char *c)
{
	switch (*c)
	{
		case '~':
			return NOT;
			break;
		case '&':
			return AND;
			break;
		case '|':
			return OR;
			break;
		case '>':
			return IMPLY;
			break;
		default:
			return -1;
			break;
	}
}

int is_unario(char c)
{
	switch (c)
	{
		case '~':
			return NOT;
			break;
		case '[':
			return NECESS;
			break;
		case '<':
			return POSSIB;
			break;
		default:
			return -1;
	}
}

int doesnt_make_sense(char *c)
{
	return 0;
}
