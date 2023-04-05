#include "main.h"

/**
 *_pow_recursion - return the value of x raised to the power of y.
 *@x: int.
 * @y: int.
 * Return: the value of x raised to the power of y. or -1 in case error.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	y--;
	return (x * _pow_recursion(x, y));
}
