#include <stddef.h>
#include <stdio.h>

/**
 * interpolation_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if ((int)pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
	}
	return (-1);
}
