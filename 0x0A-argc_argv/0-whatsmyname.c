#include <stdio.h>

/**
 * main - program to print the name of the program,
 * @argc: the number of argument presented to the program.
 * @argv: an array of the argument preseneted to the program.
 * Return: 0.
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
