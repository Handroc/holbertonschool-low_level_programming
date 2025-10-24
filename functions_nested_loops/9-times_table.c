#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			times = i * j;

			if (j == 0)
			{
				_putchar('0' + times);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (times < 10)
				{
					_putchar(' ');
					_putchar('0' + times);
				}
				else
				{
					_putchar('0' + (times) / 10);
					_putchar('0' + (times) % 10);
				}
			}
		}
		_putchar('\n');
	}
}
