#include <stddef.h>

/**
 * print_name - print a name using function call.
 * @name: the name to be passed to the function.
 * @f: the function to be called.
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
