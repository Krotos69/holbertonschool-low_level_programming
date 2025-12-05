#include "lists.h"

/**
* sum_dlistint -returns the sum of all the data (n) in a dlistint_t linked list
*@ head: pointer to the head of the doubly linked list.
*
*Return: the sum of all the data (n) in the list, or 0if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
