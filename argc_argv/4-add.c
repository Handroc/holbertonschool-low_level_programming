#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *p;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		while (*p)
		{
			if (*p > '9' || *p < '0')
			{
				puts("Error");
				return (1);
			}
			p++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
