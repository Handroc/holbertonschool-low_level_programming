#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ln;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ln = malloc(sizeof(char) * (i + 1));
	if (ln == NULL)
		return (NULL);
	for (; j <= i; j++)
		ln[j] = str[j];
	return (ln);
}
