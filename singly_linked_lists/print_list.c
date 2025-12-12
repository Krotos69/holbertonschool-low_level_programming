#include <stdio.h>
#include "lists.h"
/**
* print_list -imprime todos los elemntos de una list_t
*@h: pointer al primer nodo
* Return: numero de nodos
 */

 size_t print_list(const list_t *h)
 {
	size_t count = 0; /* Count de nodos */
	while (h)
	{
		printf( "[%u] %s\n", h->len, h->str ? h->str : "(nil)"); /* Imprime len y str */
		count++; /* Incrementa el contador de nodos */
		h = h->next; /* Avanza al siguiente nodo */
	}
	return (count); /* Retorna el numero de nodos */
 }
