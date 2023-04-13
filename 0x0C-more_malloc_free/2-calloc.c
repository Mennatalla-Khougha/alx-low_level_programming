#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate a memory for an array.
 * @nmemb: array.
 * @size: size of array.
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(size);
	if (nmemb == 0 || size == 0 || p == NULL)
		return (NULL);
	return (p);
}
