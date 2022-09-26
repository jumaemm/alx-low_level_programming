#include "main.h"

/**
 * *_memset - fills memory area with bytes
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}