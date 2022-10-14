#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings seperated
 * @separator: separator for the strings
 * @n: count of strings
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", c);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
