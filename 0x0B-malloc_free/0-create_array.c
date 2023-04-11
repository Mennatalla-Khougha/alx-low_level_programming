#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialize it.
 * @size: size of the array.
 * @c: char to initialize the array.
 * Return: NULL, or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}

	return (t);
}
