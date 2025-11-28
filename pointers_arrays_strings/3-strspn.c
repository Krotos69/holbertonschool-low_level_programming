#include "main.h"
#include <stdio.h>

/**
 * _strspn -get the lenght of a prefix substring.
 * @s: the main string to search.
 * @accept: the string containig character to match.
 *
 * Return: the numbers of bytes in the inital segment of s
 * which consist only on bytes to accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}
		if (accept[i] == '\0')
		{
			break;
		}
		s++;
	}

	return (count);
}
