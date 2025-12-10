#include "function_pointers.h"
#include <stddef.h>

/**
*array_iterator -executes a function given as a parameter
*on each element of array
*@array: pointer to the interger array
*@size: size of the array
*@action: pointer to the function to execute on each element
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
