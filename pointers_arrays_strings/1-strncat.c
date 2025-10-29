/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: the concatenation of the two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1 = 0, l2 = 0, i, j;

	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0')
		l2++;
	j = l1;
	for (i = 0; i < n && i < l2; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
