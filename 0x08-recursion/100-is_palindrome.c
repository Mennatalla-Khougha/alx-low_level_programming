#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string..
 * Return: 1 palindroma, 0 if not.
 */

int is_palindrome(char *s);
int _strlen_recursion(char *s);
int rev(char *s, int length, int i);

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
 * rev - compare a string with it's reverse
 * @s: string.
 * @length: int.
 * @i: int
 * Return: 0 if string equal its reverse. 1 otherwise.
 */

int rev(char *s, int length, int i)
{
	if (s[i] == s[length])
	{
		if (i == length || i == length + 1)
			return (1);
		length--;
		i++;
		return (rev(s, length, i));
	}
	return (0);
}

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: string..
* Return: 1 palindroma, 0 if not.
*/

int is_palindrome(char *s)
{
	return (rev(s, _strlen_recursion(s) - 1, 0));
}
