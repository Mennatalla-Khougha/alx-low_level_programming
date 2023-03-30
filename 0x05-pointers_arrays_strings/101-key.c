#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - generate random valid passwords.
 * Return: 0 Success.
 */

int main(void)
{
	int random = 0;
	int i;
	char password[100];
	int total = 2772;

	srand((unsigned int) time(NULL));
	for (i = 0; total > 126; i++)
	{
		random = rand() % 126;
		password[i] = random;
		total -= random;
		printf("%c", password[i]);
	}
	return (0);
}
