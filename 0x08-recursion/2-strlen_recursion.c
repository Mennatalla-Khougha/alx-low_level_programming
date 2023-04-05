#include "main.h"

/**
 * _strlen_recursion - return the length of a string.
 * @s: string.
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s == 0)
		return (0);

	s++;
	sum++;
	return (sum + _strlen_recursion(s));
}
