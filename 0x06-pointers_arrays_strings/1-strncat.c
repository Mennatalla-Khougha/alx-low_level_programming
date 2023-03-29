#include "main.h"

/**
 *_strncat - concanate one sting to another.
 *@dest: the string to be added to.
 *@src: the string to be added.
 *@n: number of bytes from src.
*Return: the resulting dest string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != 0)
		destlen++;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[destlen + i] = src[i];

	dest[destlen + i] = '\0';
	return (dest);
}
