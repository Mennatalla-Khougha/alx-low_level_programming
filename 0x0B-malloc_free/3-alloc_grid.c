#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2D array of ints.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: NULL or pointer to pointer.
 */

int **alloc_grid(int width, int height)
{
	int **array, i;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			return (NULL);
		}
	}
	return (array);
}
