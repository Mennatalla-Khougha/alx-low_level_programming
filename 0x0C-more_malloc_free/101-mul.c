#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * check_argc - check the number of argument.
 * @n: int
 * Return: 0, or 98.
 */

int check_argc(int n)
{
	if (n != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	return (0);
}

/**
 * check_argv - check the array.
 * @argv: array.
 * Return: 0, 98.
 */

int check_argv(char *argv[])
{
	unsigned long int i;

	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (98);
		}
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (argv[2][i] < 48 || argv[2][i] > 57)
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			return (98);
		}
	}
	return (0);
}
/**
 * print - print the result to the screen.
 * @result: int to be printed.
 * Return: nothing.
 */

void print(unsigned long int result)
{
	unsigned long int x = result;

	x /= 10;
	if (x != 0)
		print(x);
	_putchar('0' + result % 10);
}

/**
 * main - multiply two number.
 * @argc: number of argument.
 * @argv: array of arrgument.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	/*unsigned long int result;*/
	int first_check, second_check;
	unsigned long n1, n2;
	char *s1, *s2;

	first_check = check_argc(argc);
	if (first_check == 98)
		exit(98);
	second_check = check_argv(argv);
	if (second_check == 98)
		exit(98);

	/*result = atol(argv[1]) * atol(argv[2]);*/
	n1 = strtol(argv[1], &s1, 10);
	n2 = strtol(argv[2], &s2, 10);
	printf("%ld\n", n1 * n2);
	/*_putchar('\n');*/
	return (0);
}
