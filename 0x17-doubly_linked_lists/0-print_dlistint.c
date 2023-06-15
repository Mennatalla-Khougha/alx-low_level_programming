#include "lists.h"

/**
 * print_dlistint - print the elements od a doubly linked lists
 * @h: doubly linked list
 * Return: the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
