#include "main.h"

/**
 * set_bit - set the bit to 1 at a given index.
 * @n: pointer to the number.
 * @index: index to change the bit to 1.
 * Return: 1 success, -1 fail.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(inex) * 8)
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
