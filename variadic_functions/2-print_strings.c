#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a string.
 * @separator: String to print between strings.
 * @n: Number of strings passed.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
