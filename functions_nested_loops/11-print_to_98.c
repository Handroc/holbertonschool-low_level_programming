#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 */
void print_to_98(int n)
{
	int inv;
	while (n > 98)
	{
		if (n > 99)
		{
			_putchar('0' + n / 100);
			_putchar('0' + (n / 10) % 10);
			_putchar('0' + n % 10);
		}
		else if (n == 99)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		if (n > 99)
		{
			_putchar(',');
			_putchar(' ');
		}
		n = n - 1;
	}
	while (n < 98)
	{
		inv = -n;
		if (n < -9)
		{
			_putchar('-');
			_putchar('0' + inv / 10);
			_putchar('0' + inv % 10);
		}
		else if (n < 0)
		{
			_putchar('-');
			_putchar('0' + inv);
		}
		else if (n < 10)
		{
			_putchar('0' + n);
		}
		else if (n < 98)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		if (n < 97)
		{
			_putchar(',');
			_putchar(' ');
		}
		n = n + 1;
	}
	if (n == 98)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}

	_putchar('\n');
}
