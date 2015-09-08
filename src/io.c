#include "../header/io.h"

void read_file(char * input)
{
	FILE *f_in;
	f_in = fopen(input, "r");
	formula *form;
	char c;
	
	if(f_in == NULL)
	{
		print(ERROR_FILE);
		exit(1);
	}

	form = malloc(sizeof(formula));
	formula_init(form);

	c = fgetc(f_in);
	do{

		insert_formula(c, form);

		c = fgetc(f_in);
	} while(c != EOF);
	
	fclose(f_in);
	return;
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
