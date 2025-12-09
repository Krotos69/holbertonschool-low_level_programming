#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc and initializes to 0.
 * @nmemb: the number of elements in the array.
 * @size: the size of each elements.
 *
 * Return: a pointer to the allocated memory, or NULL .
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *ptr;
	unsigned int i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	char_ptr = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
		char_ptr[i] = 0;

	return (ptr);
}
