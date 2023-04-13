#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers.
 * @min: smallest int.
 * @max: largest int.
 * Return: pointer, or NULL.
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
