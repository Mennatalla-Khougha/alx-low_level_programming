#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9.
 * @c: int number.
 * Return: 1 c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
