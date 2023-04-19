#include <stddef.h>

/**
 * array_iterator - execute a function on each element of array.
 * @array: array to execute a function on its elements.
 * @size: size of the array.
 * @action: function to be executed.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
