#include "lists.h"

/**
 * free_listint_safe - free a list containing aloop.
 * @head: pointer to the start of the list.
 * Return: number of nodes freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	size_t i, loops;

	loops = floyd_loop(*h);
	if (loops == 0)
	{
		while (h && *h)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			loops++;
		}
	}
	else
	{
		while (i < loops)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			i++;
		}
		*h = NULL;
	}
	h = NULL;
	return (i);
}
