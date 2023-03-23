#include "main.h"

/**
 * print_number - print int.
 * @n: int.
 * Return: nothing.
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar('0' + n % 10);
}
