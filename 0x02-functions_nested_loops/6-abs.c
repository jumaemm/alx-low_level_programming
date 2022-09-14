#include "main.h"

/**
 * _abs - abslute value of no
 * @n: no to be checked
 * Return: 0
 */
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
