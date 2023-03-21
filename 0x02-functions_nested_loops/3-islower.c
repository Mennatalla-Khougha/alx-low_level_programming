#include "main.h"

/**
 * _islower - determine if a char is in lower case
 * @c: Ascii code char..
 * Return: 1 lowercase or 0 not.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
