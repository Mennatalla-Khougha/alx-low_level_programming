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
	char *p, *ptr;

	ptr = needle;

	if (*ptr == 0)
		return (haystack);

	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *ptr)
			continue;
		p = haystack;
		while (1)
		{
			if (*ptr == 0)
				return (haystack);
			if (*p++ != *ptr++)
				break;
		}
		ptr = needle;
	}
	return (NULL);

}
