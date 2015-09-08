#ifndef IO_H
#define IO_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "formula.h"

#define NUM_ARGS 2
#define INPUT 1
#define ERROR_INPUT "Number of arguments invalid!"
#define ERROR_FILE "File not found!"
#define FORMULA_VAZIA "Formula not found!"
#define ERRO_INPUT_FILE "Invalid character on input file"

void read_file(char * input);
void newline();
void print(char *c);
void read_symbol(char *c);

#endif /* IO_H */
