#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: Integer stored in the node
 * @prev: Points to the previous node
 * @next: Points to the next node
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s

{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
}dlistint_s_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
