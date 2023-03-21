#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: int number.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n >= 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n *= -1;
		_putchar('0' + n);
		return (n);
	}
}
