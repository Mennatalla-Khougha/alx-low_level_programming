#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Descriotion: get the last digit of a number and determine if 0, > 5 or < 6.
*
*Return: information about the last digit.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	else
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);

	return (0);
}
