#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int tmp, tmp1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 10)
	{
		tmp = n;
		tmp1 = 1;
		while (tmp >= 10)
			tmp = tmp / 10;
		_putchar('0' + tmp);
		while ((n / tmp1) >= 10)
			tmp1 = tmp1 * 10;
		if ((n / (tmp1 / 10) % 10) == 0)
			_putchar('0' + 0);
		n = n % tmp1;
	}
	if (n == 10)
	{
		_putchar('0' + 1);
		_putchar('0');
	}
	else
		_putchar('0' + n);
}
