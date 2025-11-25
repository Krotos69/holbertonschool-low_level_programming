#include "main.h"
#include <stdio.h>

/**
 * strirng_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: the string to modify.
 *
 * Description: Converts each lowercase letter in the string to its uppercase
 * equivalent by checking if a character is lowercase, and if so, subtracting
 * 32 from its ASCII value.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}

