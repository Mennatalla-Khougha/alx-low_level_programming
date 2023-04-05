#include "main.h"

/**
 * factorial - return the factorial of a given number.
 * @n: int.
 * Return: the factorial of a number or -1 to indicate an error.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
