#include "lists.h"

/**
 * delete_nodeint_at_index - remove a node at nth index.
 * @head: pointer for the start of the list.
 * @index: indexto delete the node.
 * Return: 1 success, -1 fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *no_node;
	unsigned int i = 0;

	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
		i++;
	}
	no_node = node->next;
	node->next = no_node->next;
	free(no_node);
	return (1);
}
