#include <stdarg.h>

/**
 * sum_them_all - sums all it's paramaters.
 * @n: number of parameters.
 * Return: result or 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, n);
	}

	va_end(args);

	return (result);
}
