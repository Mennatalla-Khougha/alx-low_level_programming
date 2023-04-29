#include "lists.h"

/**
 * free_listint2 - free a linked list.
 * @head: pointer to pointer of the start of a linked list.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	node = *head;
	while (node)
	{
		listint_t to_free = node;

		node = node->next;
		free(to_free);
	}
	*head = NULL;
}
