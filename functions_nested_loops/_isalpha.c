#include "main.h"
/**
 * Prototype: int _isalpha(int c);
 * _isalpha - check if the given character is an alphabetic letter.
 * @c: character to test.
 * Return: 1 (True) else 0 (False)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}