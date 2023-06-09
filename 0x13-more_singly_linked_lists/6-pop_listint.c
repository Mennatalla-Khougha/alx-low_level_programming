#include "lists.h"

/**
 * pop_listint - delete a node at the start of a linked list.
 * @head: the linked list.
 * Return: nothing.
 */

int pop_listint(listint_t **head)
{
	size_t n;
	listint_t *node;

	if (*head == NULL)
		return (0);
	node = *head;
	n = node->n;
	*head = node->next;
	node->next = NULL;
	free(node);
	return (n);
}
