#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int j = 0, i = 0;

	while (s[i] != '\0')
	{
		i++;
		j++;
	}
	j--;
	while (&s[j] >= &s[0])
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
