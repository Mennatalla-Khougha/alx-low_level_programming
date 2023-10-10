#include <stdio.h>
#include <stddef.h>

/**
 * print_array - print the array being searched
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
*/
void print_array(int *array, int size)
{
	int i;

	printf("Searching in array: %d", array[0]);
	for (i = 1; i < size; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * binary -  searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @left: first elements in array
 * @right: last element in array
 * @value: the value to search for
 * Return: index where value is located or -1
*/
int binary(int *array, int left, int right, int value)
{
	int mid = (left + right) / 2;

	if (array == NULL || (right + left) == 0)
		return (-1);
	if (left <= right)
	{
		print_array((array + left), (right - left) + 1);
		if (value == array[mid])
		{
			if (value == array[mid - 1])
				return (binary(array, left, mid, value));
			return (mid);
		}
		else if (value < array[mid])
			return (binary(array, left, mid - 1, value));
		else if (value > array[mid])
			return (binary(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary -  searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located or -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (binary(array, 0, (int)size - 1, value));
}
