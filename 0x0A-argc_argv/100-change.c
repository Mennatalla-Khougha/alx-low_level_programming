#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of coins to make a change
 * @argc: number of command line arguments.
 * @argv: array of elements.
 * Return: 0 success, 1 fail
 */

int main(int argc, char **argv)
{
	int i = 0;
	int n = atoi(argv[i]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (n > 25)
	{
		i++;
		n -= 25;
	}
	while (n > 10)
	{
		i++;
		n -= 10;
	}
	while (n > 5)
	{
		i++;
		n -= 5;
	}
	while (n > 2)
	{
		i++;
		n -= 2;
	}
	while (n > 1)
	{
		i++;
		n -= 1;
	}
	printf("%d\n", i);
	return (0);
}
