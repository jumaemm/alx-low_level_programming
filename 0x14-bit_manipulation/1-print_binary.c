#include "main.h"

/**
 * print_binary - print binary rep of number
 * @n: base 10 arg
 * Return: Always 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
