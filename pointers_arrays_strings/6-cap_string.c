/**
 * cap_string - capitalizes all words of a string
 * @a: string
 *
 * Return: string with all words capitalized
 */
char *cap_string(char *a)
{
	int i, j = 0;

	while (a[j] != '\0')
		j++;
	j--;
	for (i = 0; i <= j; i++)
	{
		if (a[i - 1] == '\t')
			a[i - 1] = ' ';
		if ((a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n' || a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}') && (a[i] >= 'a' && a[i] <= 'z'))
			a[i] = a[i] - 32;
	}
	return (a);
}
