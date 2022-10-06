#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: size of array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *s;

	if (nmemb == 0 || size == 0)
		return (0);

	s = malloc(nmemb * size);
	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = 0;
	}
	return (s);
}
