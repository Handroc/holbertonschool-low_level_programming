#include <stdio.h>
/**
 * main - prints all possible different combinations of the three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int none, ntwo, nthree;

	for (none = 0; none < 8; none++)
	{
		for (ntwo = 1 + none; ntwo < 9; ntwo++)
		{
			for (nthree = 1 + ntwo; nthree < 10; nthree++)
			{
				putchar('0' + none);
				putchar('0' + ntwo);
				putchar('0' + nthree);
				if (none != 7 || ntwo != 8 || nthree != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
