#include "main.h"
/**
 * print_triangle - prints a triangle of asterisks
 * @size: size of the triangle
 * Return: void
 * Description: prints a triangle of asterisks of given size
 */
void print_triangle(int size)
{
	int row, space, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');
		for (k = 1; k <= row; k++)
			_putchar('#');
		_putchar('\n');
	}
}
