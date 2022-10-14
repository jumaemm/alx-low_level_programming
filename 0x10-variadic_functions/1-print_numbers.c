#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers given as args
 * @separator: separator between nums
 * @n: count of nums
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", va_arg(ap, int));
			}
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
	}
}
