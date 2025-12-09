#include <stdlib.h>
#include "main.h"

/**
*_strdup - returns a pointer to a newly allocated space in memory.
*duplicates a string by allocating memory
*@str : string to duplicate
*Return: pointer to the duplicated string,
*or NULL if insufficient memory was avaible.
*/
char *_strdup(char *str)

{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
