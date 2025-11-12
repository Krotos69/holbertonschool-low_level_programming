#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 * Return: pointer to the destination string dest
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte ('\0'), to the buffer pointed to by dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
