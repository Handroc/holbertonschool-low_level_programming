/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: the concatenation of the two strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l2 = 0, l1 = 0, i;

	while (src[l2] != '\0')
		l2++;
	while (dest[l1] != '\0')
		l1++;
	for (i = 0; i < n; i++)
	{
		if (i > l2)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
