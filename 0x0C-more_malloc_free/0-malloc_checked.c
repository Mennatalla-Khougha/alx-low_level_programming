#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory.
 * @b: size of memory allocated.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *) malloc(sizeof(unsigned int) * b);

	if (p == NULL)
		exit(98);

	return (p);
}
