#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
	{
		printf("Error\n");
		return (100);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
