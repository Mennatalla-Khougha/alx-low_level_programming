#include "main.h"

/**
 * _isalpha - determine if a char from alphabet.
 *@c: ASCII code char.
 *Return: 1 alphabet char 0 otherwise,
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
