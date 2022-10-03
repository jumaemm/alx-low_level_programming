#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array and initialize
 *  with given char c
 *  @size: size of array
 *  @c: initial char value
 *  Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
	{
		return (0);
	}

	s = malloc(sizeof(c) * size);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}

	*(s + i) = '\0';
	return (s);
}
