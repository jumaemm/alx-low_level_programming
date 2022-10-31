#include "main.h"

/**
 * flip_bits - return number of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i = n ^ m;

	while (i > 0)
	{
		count++;
		i &= (i - 1);
	}
	return (count);
}
