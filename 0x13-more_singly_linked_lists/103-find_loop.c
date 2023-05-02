#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list.
 * @head: pointer to the start of the list.
 * Return: the node at the start of the loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_s, *ptr_f;

	if (head == NULL || head->next == NULL)
		return (NULL);
	ptr_s = head->next;
	ptr_f = head->next->next;
	while (ptr_f)
	{
		if (ptr_s == ptr_f)
		{
			ptr_s = head;
			while (ptr_s != ptr_f)
			{
				ptr_s = ptr_s->next;
				ptr_f = ptr_f->next;
			}
			return (ptr_s);
		}
		ptr_s = ptr_s->next;
		ptr_f = ptr_f->next;
	}
	return (NULL);
}
