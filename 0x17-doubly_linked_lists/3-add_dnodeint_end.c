#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of a linked list
 * @head: the head of the linked list
 * @n: the element of the linked list
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = create_node(n);

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = newNode;
	else
	{
		dlistint_t *current = *head;
		while (current->next)
			current = current->next;
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
