/**
 * _strlen - returns the length of a string
 * @s: character
 *
 * Return: the length j of the string
 */
int _strlen(char *s)
{
	int j = 0, i = 0;

	while (s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}
