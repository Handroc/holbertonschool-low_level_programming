#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int j = 0, i = 0;

	while (str[j] != '\0')
		j++;
	for (; i < j; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
