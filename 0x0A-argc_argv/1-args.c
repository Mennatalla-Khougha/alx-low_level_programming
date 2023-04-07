#include <stdio.h>

/**
 * main - print the number of arguments passed to it.
 * @argc: number of arguments passed to the main.
 * @argv: array of arguments passed to the main.
 * Return: 0 success.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
