#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then uppercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	/* Prints the alphabet except letters q and e*/
	{for (letter = 'a'; letter <= 'z'; letter++)
	if (letter !='e' && letter != 'q')
	putchar(letter);
	}
	putchar('\n'); /* New line at the end */
	return (0);
}
