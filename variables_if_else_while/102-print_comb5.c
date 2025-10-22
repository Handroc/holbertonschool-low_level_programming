#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int first, second;

	for (first = 0; first <= 98; first++)
	{
		for (second = first + 1; second <= 99; second++)
		{
			putchar('0' + first / 10);
			putchar('0' + first % 10);
			putchar(' ');
			putchar('0' + second / 10);
			putchar('0' + second % 10);
			if (first != 98 || second != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
