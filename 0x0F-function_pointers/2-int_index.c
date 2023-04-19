#include <stddef.h>

/**
 * int_index - searches for an int.
 * @array: the array to be searched.
 * @size: the number of elements of the array.
 * @cmp: the function to search the array.
 * Return: the index of the int or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
