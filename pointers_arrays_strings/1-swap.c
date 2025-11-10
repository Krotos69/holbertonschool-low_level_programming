#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * description: this function takes a pointer to an integer
 * and a pointer to another integer and swaps.
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
