#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all args given
 * @n: first arg
 * Return: sum of args or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
