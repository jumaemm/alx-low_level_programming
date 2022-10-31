#include "main.h"

/**
 * clear_bit - set bit to 0 at index
 * @n: binary input
 * @index: index to be cleared
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = (1 << index);

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~mask;
	return (1);
}
