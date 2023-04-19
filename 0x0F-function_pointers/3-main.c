#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - print the result of the calaculatin.
 * @argc: number of argument.
 * @argv: array of arguments.
 * Return: 0 Success.
 */

int main(int argc, char **argv)
{
	int x, y, result;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (-1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	s = argv[2];

	if (strcmp(s, "/") == 0 && y == 0)
	{
		printf("Error\n");
		return (-1);
	}

	if (strlen(s) != 1)
	{
		printf("Error\n");
		return (-1);
	}

	result = get_op_func(s)(x, y);

	printf("%u\n", result);
	return (0);
}
