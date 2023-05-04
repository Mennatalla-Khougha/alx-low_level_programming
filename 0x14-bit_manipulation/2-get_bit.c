#include "main.h"

/**
 * git_bit - get the bit at the index.
 * @n: number;
 * @index: index to get the bit at.
 * Return: 0, 1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	return (n % 2);
}
