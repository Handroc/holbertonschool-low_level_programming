/**
 * _atoi - convert a string to an integer
 * @s: string
 *
 * Return: the converted string
 */

int _atoi(char *s)
{
	int i = 0, b = 0, a = 0;
	int n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			b++;
		}
		n = (b % 2 != 0);
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (a >= 214748360 && s[i] > 4 && s[i + 1] >= '0' && s[i + 1] <= '9' && n)
					return (-2147483648);
				else if (a >= 214748360 && s[i] > 4 && s[i + 1] >= '0' && s[i + 1] <= '9')
					return (2147483647);
				a = (a + (s[i] - '0')) * 10;
				i++;
			}
			a = a / 10;
			if (n)
				return (-a);
			else
				return (a);
		}
		i++;
	}
	return (0);
}
