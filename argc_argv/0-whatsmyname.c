#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (array of arguments passed to the program)
 *
 * Return: always 0 (succes)
 */
int main(int argc, char *argv[])

{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
