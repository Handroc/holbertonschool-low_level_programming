#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * ...: parameters to be summed
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i = 0;
	int total = 0;

	if (n == 0)
		return (0);
	va_start(v, n);
	for (; i < n; i++)
	{
		total += va_arg(v, int);
	}
	va_end(v);
	return (total);
}
