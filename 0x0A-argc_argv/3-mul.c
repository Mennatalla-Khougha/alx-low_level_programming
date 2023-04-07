#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of multiplication of argv arguments.
 * @argc: number of command line argument.
 * @argv: array of element.
 * Return: 0 Success, 1 fail.
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
