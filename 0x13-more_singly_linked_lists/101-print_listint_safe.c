#include "lists.h"

/**
 * print_listint_safe - print the element of a linked list.
 * @head: the first element of the list.
 * Return: number of elements of the lists.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t i = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		node = head;
		head = head->next;
		i++;
		printf("[%p] %d\n", (void *)node, node->n);
		if (node < head)
		{
			printf("->[%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}
