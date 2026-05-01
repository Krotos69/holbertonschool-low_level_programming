#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[98];
    char *p;

    p = _strcpy(s, "First, solve the problem. Then, write the code\n");
    printf("%s", s);
    printf("%s", p);
    return (0);
}