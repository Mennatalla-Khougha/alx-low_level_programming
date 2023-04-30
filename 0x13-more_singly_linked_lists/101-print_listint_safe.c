#include "lists.h"

/**
 * print_listint_safe - print the element of a linked list.
 * @head: the first element of the list.
 * Return: number of elements of the lists.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int num;

	if (head == NULL)
		exit(98);
	while (head)
	{
		num = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (num < 0)
		{
			printf("->[%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}
