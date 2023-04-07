#include <stdio.h>

/**
 * main - prints the argument it recieves.
 * @argc: number of arguments to the command line.
 * @argv: arrays of elemants to the command line.
 * Return: 0 success.
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
