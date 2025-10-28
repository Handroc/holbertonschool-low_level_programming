#include "main.h"
/**
 * *_strcpy - copies the string to the buffer
 * @dest: string
 * @src: string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0, i = 0;

	while (src[j] != '\0')
		j++;
	for (; i < j; i++)
		dest[i] = src[i];
	return (dest);
}
