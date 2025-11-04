/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p, *q;

	if (*needle == '\0')
		return (haystack);

	while (*haystack++ != '\0')
	{
		p = needle;
		q = haystack;
		while (*p != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
