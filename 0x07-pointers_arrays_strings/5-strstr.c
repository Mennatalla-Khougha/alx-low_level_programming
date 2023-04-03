#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched.
 * @needle: the string to be searched for.
 * Return: a pointer to the locates substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int haystack_len = 0, needle_len = 0;
	int i, j;

	while (haystack[haystack_len] != 0)
		haystack_len++;

	while (needle[needle_len] != 0)
		needle_len++;

	for (i = 0; i < needle_len; i++)
	{
		for (j = 0; j < haystack_len; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (haystack + j);
			}
		}
		return (NULL);
	}

	return (0);
}
