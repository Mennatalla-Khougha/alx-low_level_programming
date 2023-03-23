#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of a number.
 * Return: 0 Success.
 */

int main(void)
{
	long num = 612852475143;
	long i;
	long prime;

	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
			prime = num / i;
	}
	printf("%ld\n", prime);
	return (0);
}
