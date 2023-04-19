#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of it's own main function
 * @argc: number of arguments
 * @argv: array of arguments.
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int x, i;
	int (*opcode)(int, char **) = main;
	unsigned char print;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < x; i++)
	{
		print = *(unsigned char *)opcode;
		printf("%.2x", print);
		if (i == x - 1)
			continue;
		printf(" ");
		print++;
	}
	printf("\n");
	return (0);
}
