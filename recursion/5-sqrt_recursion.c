/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate the square root of
 *
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (-1);
}
