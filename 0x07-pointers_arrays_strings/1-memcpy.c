#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the memory area where the data is copied.
 * @src: the memory area where the data is copied from.
 * @n: the nuber of copied n bytes.
 * Return: pointer to the memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
