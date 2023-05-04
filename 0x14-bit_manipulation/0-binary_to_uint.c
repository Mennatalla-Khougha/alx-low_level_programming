#include "main.h"

/**
 * binary_to_uint - convert a binary number to int.
 * @b: binary number.
 * Return: int number.
 */

unsigned int binary_to_uint(const char *b)
{
	char *bin = "01";
	int n = (int)strlen(b);
	unsigned int num = 0, base = 1, x;
	int i;

	if (b == NULL)
		return (0);
	for (i = (n - 1); i >= 0; i--)
	{
		if (strchr(bin, b[i]) == 0)
			return (0);
		if (i < (n - 1))
			base *= 2;
		x = b[i] - '0';
		num += x * base;
	}
	return (num);
}
