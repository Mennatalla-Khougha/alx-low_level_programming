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
	int i, j, k = 0;
	char *p;

	while (needle[needle_len] != 0)
		needle_len++;

	while (haystack[haystack_len] != 0)
		haystack_len++;

	for (i = 0; i < haystack_len; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = haystack + i;
			for (j = 0; j < needle_len; j++)
			{
				if (haystack[i + j] == needle[j])
					k = 1;
				else
					k = 0;
			}
			break;
		}
	}
	if (k == 1)
		return (p);
	else
		return (NULL);

	return ('\0');
}
