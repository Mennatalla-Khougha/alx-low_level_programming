#include "main.h"

/**
 * binary_to_uint - convert a binary number to int.
 * @b: binary number.
 * Return: int number.
 */

unsigned int binary_to_uint(const char *b)
{
	int n = (int)strlen(b);
	unsigned int num = 0;
	int i, base = 1;

	if (b == NULL)
		return (0);
	for (i = (n - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1'))
			return (0);
		num += (b[i] - '0') * base;
		base *= 2;
	}
	return (num);
}
