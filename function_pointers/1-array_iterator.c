#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size == 0)
		return;
	do {
		action(array[i]);
		i++;
	} while (i < size);
}
