#include <stdio.h>
/**
 * main - Entry point working with putchar
 * Return: Always 0 (Success)
 * Description: Prints all the numbers of base 16 in lowercase 
 * base 16 is hexadecimal
 */
int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
		putchar(letter);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
