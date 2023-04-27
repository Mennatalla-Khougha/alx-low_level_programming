#include "lists.h"

/**
 * free_list - frees a list.
 * @head: pointer to the first element in the list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *node = head, *node_free;

	while (!node)
	{
		node_free = node;
		node = node->next;
		free(node_free);
	}
	head = NULL;
}
