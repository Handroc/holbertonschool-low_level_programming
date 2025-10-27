#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: integer
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < size; j++)
	{
		for (i = size; i > j + 1; i--)
			_putchar(' ');
		for (k = 0; k <= j; k++)
			_putchar('#');
		_putchar('\n');
	}
}
