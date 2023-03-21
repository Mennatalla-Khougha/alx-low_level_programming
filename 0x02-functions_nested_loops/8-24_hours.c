#include "main.h"

/**
 * countdown - print the countdown of 2 digits
 * Description: print the countdown.
 *@n: int number.
 * Return: nothing.
 */

void countdown(int n)
{
	if (n < 10)
	{
		_putchar('0');
		_putchar('0' + n);
	}
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}

/**
 * jack_bauer - print count down from 00:00 to 23:59;
 * Return: nothing.
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			countdown(i);
			_putchar(':');
			countdown(j);
			_putchar('\n');
		}
		j = 0;
	}
}
