#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int none, ntwo;

	for (none = 0; none < 9; none++)
	{
		for (ntwo = none + 1; ntwo < 10; ntwo++)
		{
			putchar('0' + none);
			putchar('0' + ntwo);
			if (none != 8 || ntwo != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
