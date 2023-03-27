#include "main.h"

/**
 * swap_int - swaps the values of two ints.
 * @a: int number.
 * @b: int number.
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
