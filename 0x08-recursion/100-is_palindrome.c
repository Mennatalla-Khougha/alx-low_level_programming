#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string..
 * Return: 1 palindroma, 0 if not.
 */

int is_palindrome(char *s);
int _strlen_recursion(char *s);
int _strcmp(char *s1, char *s2, int len1, int len2);
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
 * @len1:int.
 * @len2: int.
 * Return: o the same. any other value differant.
 */

int _strcmp(char *s1, char *s2, int len1, int len2)
{
	if (s1[len1] != 0 || s2[len2] != 0)
	{
		if (s1[len1] != s2[len2])
			return (1);
	}
	if (s1[len1] == 0 || s2[len2] == 0)
		return (0);
	len1++;
	len2++;
	_strcmp(s1, s2, len1, len2);
	return (0);
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
	char x[100];
	int y;

	rev(s, _strlen_recursion(s), x);
       	y = _strcmp(s, x, 0, 0);

	if (y == 0)
		return (1);
	else
		return (0);
}
