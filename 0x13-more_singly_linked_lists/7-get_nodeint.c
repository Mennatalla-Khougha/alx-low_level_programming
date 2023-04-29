#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: the start of the list.
 * @index: the index at which it return the node.
 * Return: node at index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (NULL);
}
