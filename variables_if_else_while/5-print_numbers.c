#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */

int main()
{
	int num;

	for (num = 0; num <= 10; num++) 
		printf("%d\n", num);
		
	printf("Finished printing numbers from 0 to 10.\n");

	return (0);
}
