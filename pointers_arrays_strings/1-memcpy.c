#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i <= n; i++) /*loop through n bytes*/
	{
		dest[i] = src[i]; /*copia cada byte del source hacia el destino*/
	}
	return (dest); /*return pointer to destination memory*/
}
