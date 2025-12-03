#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t count = 0;

	while (h != NULL) /* Traverse until the end of the list*/
	{
		printf("%d\n", h->n); /* Print the interger stored in the node */
		count++;			 /* Increment node counter*/
		h = h->next; /* move to the next node */
	}
	return (count); /* Return the total numbers of nodes */
}
