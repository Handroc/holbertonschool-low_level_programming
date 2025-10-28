#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int j = 0, i = 0;
	char st;

	while (s[i] != '\0')
	{
		i++;
		j++;
	}
	j--;
	i = 0;
	for (; j > i; j--)
	{
		st = s[i];
		s[i] = s[j];
		s[j] = st;
		i++;
	}
}
