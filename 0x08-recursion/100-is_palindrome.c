#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string..
 * Return: 1 palindroma, 0 if not.
 */

int is_palindrome(char *s);
int _strlen_recursion(char *s);
int _strcmp(char *s1, char *s2);
void rev(char *s, int length, char *x);

/**
 * _strlen_recursion - calculate the length of a string
 * @s: string..
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

/**
 * _strcmp - compare two string.
 * @s1: string.
 * @s2: string.
 * Return: o the same. any other value differant.
 */.

int _strcmp(char *s1, char *s2)
{
	if (*s1 != 0 || *s2 != 0)
	{
		if (*s1 != *s2)
			return (1);
	}
	if (*s1 == 0 || *s2 == 0)
		return (0);
	*s1++;
	*s2++;
	_strcmp(s1, s2);
}

/**
 * rev - reverse a string.
 * @s: string.
 * @length: int.
 * @x: string.
 * Return: nothing.
 */

void rev(char *s, int length, char *x)
{
	if (length == 0)
	{
		x[length] = *s;
		return;
	}
	s++;
	length--;
	rev(s, length, x);
	s--;
	x[length] = *s--;
	length++;
}

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: string..
* Return: 1 palindroma, 0 if not.
*/

int is_palindrome(char *s)
{
	charx[100];
	char *ptr = x;

	rev(s, _strlen_recursion(s), x);
	int y = _strcmp(s, ptr);

	if (y == 0)
		return (1);
	else
		return (0);
}
