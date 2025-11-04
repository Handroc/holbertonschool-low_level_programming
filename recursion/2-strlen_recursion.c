int _strlen_recursion(char *s)
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
{
	if (*s == '\0')
		return 0;
	return (1 + _strlen_recursion(s + 1));
}
