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
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return (p);
}
