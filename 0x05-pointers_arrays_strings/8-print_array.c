#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers.
 * @a: array.
 * @n: number of elements to be printed.
 * Return nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		{
			printf(", ");
		}
		else
		{
			putchar('\n');
		}
	}
}
