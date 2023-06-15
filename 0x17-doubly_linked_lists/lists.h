#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct distint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct distint_s
{
	int n;
	struct distint_s *prev;
	struct distint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);


#endif /* LISTS_H */
