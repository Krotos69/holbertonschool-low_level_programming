#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes to include from s2.
 *
 * Return: a pointer to the newly allocated space in memory
 * containing the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str_cat;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n < len2)
		len2 = n;

	str_cat = malloc(len1 + len2 + 1);

	if (str_cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str_cat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		str_cat[i] = s2[j];

	str_cat[i] = '\0';

	return (str_cat);
}
