#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
