#include "../header/io.h"

void read_file(char * input)
{
	FILE *f_in;
	f_in = fopen(input, "r");
	formula *form;
	
	if(f_in == NULL)
	{
		print(ERROR_FILE);
		exit(1);
	}
	
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
