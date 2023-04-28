#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list.
 * @h: the linked list.
 * Return: the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
