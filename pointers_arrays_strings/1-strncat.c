#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to the destination string to which src is appended
 * @src: pointer to the source string to be appended to dest
 * @n: maximum number of bytes to be used from src
 * Description: This function appends at most n bytes from the string
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	/* Move dest pointer to the end of the current string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* Append up to n characters from src to dest */
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* Null-terminate the resulting string */
	*dest = '\0';
	return (original_dest);
}
