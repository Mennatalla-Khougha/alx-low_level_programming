#include "lists.h"

/**
 * free_listint_safe - free a list containing aloop.
 * @h: pointer to the start of the list.
 * Return: number of nodes freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = *h;
	size_t i = 0, loops;

	if (h == NULL || *h == NULL)
		return (0);

	loops = floyd_loop(*h);
	while (*h)
	{
		if (loops == 0)
		{
			node = *h;
			*h->next = NULL;
			free(node);
			break
		}
		loops--;
		i++;
		node = *h;
		*h = node->next;
		free(node);
	}
	*h = NULL;
	return (i);
}



/*	if (loops == 0)
	{
		while (h != NULL && *h != NULL)
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
	return (loops);
}*/
