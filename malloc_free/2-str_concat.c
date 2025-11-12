#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k;
	char *con;


	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con = malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		con[k] = s1[k];
	for (k = 0; k <= j; k++)
		con[i + k] = s2[k];
	return (con);
}
