/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a : string
 *
 * Return: string of lowercase letters turned uppercase
 */
char *string_toupper(char *a)
{
	int i, j = 0;

	while (a[j] != '\0')
		j++;
	j--;
	for (i = 0; i <= j; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	return (a);
}
