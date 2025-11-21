#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @v: va_list containing the character to print
 */
void print_char(va_list v)
{
	printf("%c", va_arg(v, int));
}
/**
 * print_float - prints a float
 * @v: va_list containing the float to print
 */
void print_float(va_list v)
{
	printf("%f", va_arg(v, double));
}
/**
 * print_int - prints an integer
 * @v: va_list containing the integer to print
 */
void print_int(va_list v)
{
	printf("%d", va_arg(v, int));
}
/**
 * print_string - prints a string
 * @v: va_list containing the string to print
 */
void print_string(va_list v)
{
	char *s = va_arg(v, char *);

	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * ...: variable number of arguments to be printed
 */
void print_all(const char *const format, ...)
{
	va_list v;
	int i = 0;
	int j = 0;
	char *sep = "";

	checker printers[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(v, format);
	while (format && format[i])
	{
		while (j < 4)
		{
			if (format[i] == *printers[j].type)
			{
				printf("%s", sep);
				printers[j].function(v);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	va_end(v);
	printf("\n");
}
