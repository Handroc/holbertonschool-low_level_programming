#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * ...: numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i = 0;

	va_start(v, n);
	if (separator == NULL)
		for (; i < n; i++)
			printf("%d", va_arg(v, int));
	else
		for (; i < n; i++)
		{
			if (i != n - 1)
				printf("%d%s", va_arg(v, int), separator);
			else
				printf("%d", va_arg(v, int));
		}
	va_end(v);
	printf("\n");
}
