#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int j = 0, i = 0;

	while (str[j] != '\0')
		j++;
	if (j % 2 != 0)
		for (i = (j + 1) / 2; i < j; i++)
			_putchar(str[i]);
	else
		for (i = j / 2; i < j; i++)
			_putchar(str[i]);
	_putchar('\n');
}
