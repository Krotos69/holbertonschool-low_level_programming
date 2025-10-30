#include <stdio.h>
/**
* File:   3-print_alphabets.c*
**/ 
int main(void)
{
	char ch;
	/* Prints the alphabet in lowercase, and then in uppercase*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/* Prints the alphabet in lowercase, and then in uppercase*/
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n'); /* New line at the end */
	return (0);
}
