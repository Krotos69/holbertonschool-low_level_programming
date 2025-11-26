#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of string.
 * @str: the string to modify.
 *
 * Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
				break;
			}
		}
		i++;
	}
	return (str);
}
