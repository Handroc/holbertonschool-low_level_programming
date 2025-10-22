#include "main.h"
/**
 * print_sign - checks whether a number is positive, negative or null
 * @c: character to be checked
 *
 * Return: 1 if c is positive, 0 if c is null or -1 if c is negative
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
