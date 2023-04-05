#include "main.h>"

/**
 *_sqrt_recursion - return the natural square root of a number.
 *@n: int.
 * @x: int used to determine the square root without sagmintation fault.
 * Return: the natural square root of a number, or -1 if none exist.
 */
int squrt(int n, int x);

int _sqrt_recursion(int n)
{
	return (squrt(n, 1));
}
/**
 * squrt - return the natural square root of a number without sagmintaion fault
 * @n: int.
 * @x: int used to determine the square root without sagmintation fault.
 *Return: the square root of n. or -1 if none exist.
 */

int squrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);

	x++;
	return (squrt(n, x));
}
