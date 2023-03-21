#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: 0 (Success).
 */

void print_alphabet(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}
