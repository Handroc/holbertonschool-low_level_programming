/**
 * cap_string - capitalizes all words of a string
 * @a: string
 *
 * Return: string with all words capitalized
 */
char *cap_string(char *a)
{
	int i, j = 0, k;
	char *s = " \t\n,;.!?\"(){}";

	while (a[j] != '\0')
		j++;
	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] = a[0] - 32;
	for (i = 1; i <= j; i++)
	{
		for (k = 0; k <= 12; k++)
			if (a[i - 1] == s[k])
				if (a[i] >= 'a' && a[i] <= 'z')
					a[i] = a[i] - 32;
	}
	return (a);
}
