#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * ...: strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	char *s;

	va_start(v, n);
	if (separator == NULL)
		for (i = 0; i < n; i++)
		{
			s = va_arg(v, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
	else
	{
		for (i = 0; i < n; i++)
		{
			s = va_arg(v, char *);
			if (s == NULL)
			{
				if (i != n - 1)
					printf("(nil)%s", separator);
				else
					printf("(nil)");
			}
			else
			{
				if (i != n - 1)
					printf("%s%s", s, separator);
				else
					printf("%s", s);
			}
		}
	}
	va_end(v);
	printf("\n");
}
