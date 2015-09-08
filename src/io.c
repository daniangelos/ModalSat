#include "../header/io.h"

void read_file(char * input)
{
	FILE *f_in;
	f_in = fopen(input, "r");
	formula *form;
	char *c;
	int i = 0;
	int j, k;
	
	
	if(f_in == NULL)
	{
		print(ERROR_FILE);
		exit(1);
	}

	form = malloc(sizeof(formula));
	formula_init(form);

	*c = fgetc(f_in);
	while(*c != EOF)
	{

		read_symbol(c);



		i = 0;
		*c = fgetc(f_in);
	}
	
	fclose(f_in);
	return;
}

void read_symbol(char *c)
{
//	if(c == '(') return;
/*	else */ if((is_operator(c) == 1) || isalpha(c)) 
	{		// insert_formula
		//push pilha 1

	}
	else if(doesnt_make_sense(c))
	{
		//have to read more
	}
	else
	{
		// push pilha 2
		//read_more;
		read_symbol(c);
	}
}

void newline()
{
	printf("\n");
	return;
}

void print(char *c)
{
	printf("%s\n",c);
	return;
}	
