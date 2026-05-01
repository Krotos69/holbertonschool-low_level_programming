#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    /* Traverse the list starting from head */
    while (h != NULL)
    {
        printf("%d\n", h->n);  /* Print the integer stored in the node */
        h = h->next;           /* Move to the next node */
        count++;               /* Increment node counter */
    }

    return (count);
}