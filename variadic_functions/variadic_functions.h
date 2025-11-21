#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct formats
{
	char *type;
	void (*function)(va_list);
} checker;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list v);
void print_int(va_list v);
void print_float(va_list v);
void print_string(va_list v);

#endif
