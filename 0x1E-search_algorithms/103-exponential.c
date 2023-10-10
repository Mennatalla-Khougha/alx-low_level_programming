#include <stddef.h>
#include <stdio.h>
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
 * exponential_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t prop = 1, left, right, mid;

	if (array == NULL || size == 0)
		return (-1);
	for (prop = 1; prop < size; prop *= 2)
	{
		if (value <= array[prop])
			break;
		printf("Value checked array[%ld] = [%d]\n", prop, array[prop]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",  prop / 2, prop - 1);
	left = prop / 2, right = prop - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array((array + left), (right - left) + 1);
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
}
