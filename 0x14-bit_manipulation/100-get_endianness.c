#include "main.h"

/**
 * get_endianness - determine if the machine uses littleor big endianness.
 * Return: 1 little endianness, 0 big endianness.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c == 0x01)
	{
		return (1);
	}
	return (0);
}
