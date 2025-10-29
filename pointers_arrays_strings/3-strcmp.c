/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: negative if s1 is less than s2, positive if greater and 0 is equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[j] != '\0')
		j++;
	for (; i <= j; i++)
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (-1);
			else
				return (1);
		}
	return (0);
}
