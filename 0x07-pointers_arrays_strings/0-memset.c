#include "main.h"

/**
 * _memset - fills memory with a contant byte.
 * @s: pointer to the memory area,
 * @b: constant byte.
 * @n: number of bytes of the memory area.
 * Retun: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
