#include "main.h"

/**
 * get_bit - return value of bit at index
 * @n: input int
 * @index: index to be checked
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index) == 0)
		return (0);
	return (1);
}
