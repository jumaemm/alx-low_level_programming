#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: memory to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == 0)
	{
		exit(98);
		return (0);
	}
	return (c);
}
