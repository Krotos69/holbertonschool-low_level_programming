#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int i;

	hash_table_created = malloc(sizeof(hash_table_t));
	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table_created->array == NULL)
	{
		free(hash_table_created);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table_created->array[i] = NULL;

	return (hash_table_created);
}
