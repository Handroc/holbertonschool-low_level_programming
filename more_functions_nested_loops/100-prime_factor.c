#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long int n = 612852475143, i = 2;

	while (n > i)
	{
		if (n % i == 0)
			n = n / i;
		else
			i++;
	}
	printf("%ld\n", i);
	return (0);
}
