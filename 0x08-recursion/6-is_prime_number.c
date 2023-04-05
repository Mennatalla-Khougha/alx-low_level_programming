#include "main.h"

/**
 * is_prime_number - return 1 if the input is prime.
 * @n: int.
 * @x: int to avoid sagmintation fault.
 * Return: 1 if n is prime else 0.
 */

int prime(int n, int x);

int is_prime_number(int n)
{
	int x = 2;

	return (prime(n, x));
}

/**
 * prime - return 1 if prime.
 * @n: int.
 * @x: int.
 * Return: 1 if prime, else 0.
 */

int prime(int n, int x)
{
	if (n < 2)
		return (0);
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);

	x++;
	return (prime(n, x));
}
