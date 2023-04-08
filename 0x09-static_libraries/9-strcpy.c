#include "main.h"

/**
 * *_strcpy - copy one string to another.
 * @dest: the string copied to.
 * @src: the string copied.
 * Return: the string copied to.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j = 0;

	while (src[j] != 0)
	{
		j++;
	}

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
