#include "main.h"

/**
 * _pow_recursion - returns value of one input
 * raised to power of the other
 * @x: first input
 * @y: power value
 * Return: result of power operation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
