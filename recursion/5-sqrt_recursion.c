#include "main.h"

/**
 * _sqrt_helper - helper function to find the sqr recursively.
 * @n: the number to find the sqr of.
 * @sqr: the current number to test as a potential square root.
 *
 * Return: the natural square root of n, or -1 if no natural root exist.
 */
int _sqrt_helper(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}
	if (sqr * sqr > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, sqr + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of.
 *
 * Return: the natural sqr of n, or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0));
}
