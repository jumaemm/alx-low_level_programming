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
	int x;

	va_start(ap, n);

	if (separator != NULL && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(ap, int);
			printf("%d", x);
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
