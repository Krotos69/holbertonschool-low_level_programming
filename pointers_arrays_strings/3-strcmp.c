#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * description: compares the two strings character by character
 * Return an integer less than, equal to, or greater than zero
 *         if s1 is found, respectively, to be less than, to match,
 *         or be greater than s2
 *
 * Return: the difference between the first unmatched characters,
 * or 0 if the strings area equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
