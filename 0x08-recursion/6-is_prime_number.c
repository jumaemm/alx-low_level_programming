#include "main.h"

/**
 * prime_helper - compute whether prime number
 * given two inputs
 * @x: base input
 * @y: reducing input
 * Return: 1 if prime, 0 if not
 */
int prime_helper(int x, int y)
{
	if (y <= 1)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (prime_helper(x, y - 1));
}

/**
 * is_prime_number - compute whether number is prime
 * @n: input number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (prime_helper(n, n - 1));
}
