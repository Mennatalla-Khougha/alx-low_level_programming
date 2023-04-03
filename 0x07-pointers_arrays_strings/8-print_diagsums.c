#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of 2D array.
 * @a: 2D array.
 * @size: the size of the array.
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		j += size - 1;
		sum1 += a[j];
	}

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum2, sum1);
}
