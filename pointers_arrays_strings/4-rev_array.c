/**
 * reverse_array - reverses the content of an array of integer
 * @a: an array of integers
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i, tmp = 0, tmp2 = n - 1;

	if (n % 2 == 0)
		for (i = 0; i < n / 2; i++)
		{
			tmp = a[i];
			a[i] = a[tmp2];
			a[tmp2] = tmp;
			tmp2--;
		}
	else
		for (i = 0; i < (n + 1) / 2; i++)
		{
			tmp = a[i];
			a[i] = a[tmp2];
			a[tmp2] = tmp;
			tmp2--;
		}
}
