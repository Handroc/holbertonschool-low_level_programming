/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int o;
	char *p;

	while (*s)
	{
		p = accept;
		o = 0;
		while (*p)
		{
			if (*s == *p)
				o = 1;
			p++;
		}
		if (!o)
			return (i);
		i++;
		s++;
	}
	return (i);
}
