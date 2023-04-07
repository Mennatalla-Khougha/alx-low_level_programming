#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of elements.
 * Return: 0 success, 1 fail.
 */

int main(int argc, char **argv)
{
	int i;
	int result = 0;
	unsigned long j;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
