#include "main.h"

/**
 * sqrt_helper - recursively evaluate whether second
 * input is square root of first
 * @x:  base number
 * @y: comparative input
 * Return: y if square root, -1 if not possible
 */
int sqrt_helper(int x, int y)
{
	if (y * y == x)
	{
		/*y is square root of x*/
		return (y);
	}
	else if (y * y > x)
	{
		/*x has no natural square root*/
		return (-1);
	}
	return (sqrt_helper(x, y + 1));
}

/**
 * _sqrt_recursion - return natural square root of num
 * @n: input number
 * Return: Square root of n,-1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
