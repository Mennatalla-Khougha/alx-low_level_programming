#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched.
 * @needle: the string to be searched for.
 * Return: a pointer to the locates substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0, haystack_len = 0;
	int i;

	while (needle[needle_len] != '\0')
		needle_len++;

	if (needle_len == 0)
		return (haystack);

	while (haystack[haystack_len] != 0)
		haystack_len++;

	for (i = 0; i < haystack_len; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
