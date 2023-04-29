#include "lists.h"

/**
 * free_listint - free the linked list.
 * @head: the linked list.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
