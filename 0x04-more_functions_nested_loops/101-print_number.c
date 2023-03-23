#include "main.h"

/**
 * print_number - print numbers.
 * @n: int number.
 * Return: nothing.
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n < 10)
		_putchar('0' + n);
	else if (n < 100)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n < 1000)
	{
		_putchar('0' + n / 100);
		n = n - (n / 100 * 100);
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + n / 1000);
		n = n - (n / 1000 * 1000);
		_putchar('0' + n / 100);
		n = n - (n / 100 * 100);
		_putchar('0' + n /10);
		_putchar('0' + n % 10);
	}
}
