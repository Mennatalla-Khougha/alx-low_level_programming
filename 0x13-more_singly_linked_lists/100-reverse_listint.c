#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 * @head: pointer to the first node
 * Return: reversed list..
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first_node, *last_node;

	if (*head == NULL || head == NULL)
		return (NULL);
	first_node = NULL;
	while ((*head)->next)
	{
		last_node = (*head)->next;
		(*head)->next = first_node;
		first_node = *head;
		*head = last_node;
	}
	(*head)->next = first_node;
	return (*head);
}
