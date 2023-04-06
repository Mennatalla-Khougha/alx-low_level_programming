#include "main.h"

/**
 * _strcmp - compare 2 strings.
 * @s1: first string.
 * @s2: second string.
 * @len1: int.
 * @len2: int.
 * Return: 1 if identical, 0 otherwise.
 */

int _strcmp(char *s1, int len1, char *s2, int len2)
{
	if (s1[len1] == 0 && s2[len2] == 0)
		return (1);

	if (s1[len1] == s2[len2])
	{
		len1++;
		len2++;
		return (_strcmp(s1, len1, s2, len2));
	}

	if (s2[len2] == 0)
		return (0);

	if (s2[len2] == '*')
		return (_strcmp(s1, len1 + 1, s2, len2) || _strcmp(s1, len1, s2, len2 + 1));

	if (s1[len1] == 0)
	{
		if (s2[len2] == '*')
		{
			len2++;
			return (s1, len1, s2, len2);
		}
		else
			return (0);
	}
	return (0);
}

/**
 * wildcmp - compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: 1 identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	return (_strcmp(s1, 0, s2, 0));
}
