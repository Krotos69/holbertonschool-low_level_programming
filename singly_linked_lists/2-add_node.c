#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - calcula la longitud de una cadena
 * @s: puntero a la cadena
 * Return: longitud de la cadena
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - duplica una cadena en memoria nueva
 * @s: cadena a duplicar
 * Return: puntero a la nueva cadena, o NULL si falla
 */
char *_strdup(const char *s)
{
	char *dup;
	unsigned int i, len;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);

	dup = malloc(sizeof(char) * (len + 1)); /* +1 para el terminador */
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	dup[i] = s[i];

	dup[len] = '\0'; /* terminador */

	return (dup);
}

/**
 * add_node - añade un nuevo nodo al inicio de una lista list_t
 * @head: puntero al puntero de la cabeza de la lista
 * @str: cadena que se añadirá al nuevo nodo
 * Return: dirección del nuevo elemento, o NULL si falla
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = _strdup(str); /* usamos nuestra propia versión */
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
