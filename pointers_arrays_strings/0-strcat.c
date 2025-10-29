/**
 *
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0, l2 = 0, i, j;

	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0')
		l2++;
	j = l1;
	for (i = 0; i < l2; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}