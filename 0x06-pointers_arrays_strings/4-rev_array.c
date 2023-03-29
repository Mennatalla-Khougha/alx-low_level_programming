#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 * @a: array of integers.
 * @n: number of elements in the array.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int x = a[0];
	int i;

	for (i = 0; i <= n; i++)
	{
		n--;
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
