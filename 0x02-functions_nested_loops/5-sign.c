#include "main.h"

/**
*print_sign - determine if int begger or equal or smaller than zero.
*@n: int number.
* Return: 1 positive, 0 zero, -1 negative;
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
