#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
*is_number - checks if a string is a valid number
*@str: string to check
*Return: 1 if valid number, 0 otherwise
*/
int is_number(char *str)
{
	int i = 0;

	if (str[0] == '-' || str[0] == '+') /* handle negative and positive signs */
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
*main - entry point of the program
*@argc: argument count
*@argv: argument vector
*Return: 0 if successful, 1 if tan argument contains non-digit characters
*/
int main(int argc, char *argv[])
{
	int i, sum = 0, num;

	for (i = 1; i < argc; i++)

	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
