#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords.
 * Return: 0 Success.
 */

int main(void)
{
	int random;
	int i;
	int total;

	srand(time(NULL));

	for(i = 0, total = 2772; total > 122; i++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		total -= random;
	}
	printf("%c", total);

	return (0);
}
