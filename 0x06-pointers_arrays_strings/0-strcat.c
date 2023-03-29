#include "main.h"

/**
 * _strcat - function to concatenates two strings.
 * @dest: string to be cocatenated.
 * @src: string to be concatenated to.
 * Return: a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int destlen, srclen = 0;

	while (dest[destlen] != '\0')
		destlen++;

	while (src[srclen] != '\0')
	{
		*(dest + destlen) = src[srclen];
		srclen++;
		destlen++;
	}

	dest[destlen] = '\0';
	return (dest);
}
