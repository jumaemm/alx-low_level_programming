#include "main.h"

/**
 * set_bit - set bit at given index 1
 * @n: input int
 * @index: index to be chenged
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;

	*n ^= mask;
	return (1);
}
