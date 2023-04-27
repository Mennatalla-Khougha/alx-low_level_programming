#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to print it's elements.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
