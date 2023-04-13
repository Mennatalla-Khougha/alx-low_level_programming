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

void print(int *result, int len)
{
	int i; 

	for (i = 0; i < len; i++)
	{
			_putchar(result[i] + '0');
	}

/*	x /= 10;
	if (x != 0)
		print(x);
	_putchar('0' + result % 10);*/
}

/**
 * main - multiply two number.
 * @argc: number of argument.
 * @argv: array of arrgument.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int first_check, second_check, i, j, len;
	int *array, digit1, digit2, carry;
	char *s1, *s2;

	first_check = check_argc(argc);
	if (first_check == 98)
		exit(98);
	second_check = check_argv(argv);
	if (second_check == 98)
		exit(98);
	array = malloc(sizeof(int) * (strlen(argv[1]) + strlen(argv[2]) + 1));
	if (array == NULL)
	{
		free(array);
		return (1);
	}
	len = strlen(argv[1]) + strlen(argv[2]);
	for (i = 0; i < len; i++)
		array[i] = 0;
	s1 = argv[1];
       	s2 = argv[2];
	i = strlen(argv[1]) - 1;
       	j = strlen(argv[2]) - 1;
	for (; i >= 0; i--)
	{
		digit1 = s1[i] + '0', carry = 0;
		for (; j >= 0; j--)
		{
			digit2 = s2[j] + '0';
			carry += array[i + j + 1] + (digit1 * digit2);
			array[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			array[i + j + 1] += carry;
	}
	/*result = atol(argv[1]) * atol(argv[2]);*/
	/*n1 = strtol(argv[1], &s1, 10);*/
	/*n2 = strtol(argv[2], &s2, 10);*/
	/*printf("%ld\n", n1 * n2);*/
	print(array, len);
	_putchar('\n');
	free(array);
	return (0);
}
