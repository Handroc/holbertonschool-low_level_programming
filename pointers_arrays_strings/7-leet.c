/**
 * leet - encodes a string into 1337.
 * @a: string
 *
 * Return: the encoded string
 */

char *leet(char *a)
{
	char *s1 = "aAeEoOtTlL", *s2 = "43071";
	int i, k;
	
	for (i = 0; i <= 9; i++)
	{
		k = 0;
		while (a[k] != '\0')
		{
			if (s1[i] == a[k])
				a[k] = s2[i / 2];
			k++;
		}
	}
	return (a);
}
