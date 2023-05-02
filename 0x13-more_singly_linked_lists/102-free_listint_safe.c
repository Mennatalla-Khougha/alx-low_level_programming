#include "lists.h"

/**
 * free_listint_safe - free a list containing aloop.
 * @h: pointer to the start of the list.
 * Return: number of nodes freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *node;

	if (*h == NULL)
		return (0);
	while (*h)
	{
		if (*h - (*h)->next != 0)
		{
			node = *h;
			free(*h);
			i++;
			break;
		}
		node = *h;
		*h = (*h)->next;
		free(node);
		i++;
	}
	*h = NULL;
	return (i);
}
