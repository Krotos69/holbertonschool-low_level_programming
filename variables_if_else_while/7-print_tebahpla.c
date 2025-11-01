#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 * prints the lowercase alphabet in reverse
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
