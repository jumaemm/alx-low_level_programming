#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print char data type
 * @c: char to be printed
 * Return: Always o
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - print int data type
 * @i: int to be printed
 * Return: Always 0
 */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_f - print float data type
 * @f: float to be printed
 * Return: Always 0
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_s - print string data type
 * @s: string to be printed
 * Return: Always 0
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}

/**
 * print_all - prints anything that's given
 * @format: format for printing the args
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	format_t options[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (options[j].key != NULL)
		{
			if (*(options[j].key) == format[i])
			{
				printf("%s", separator);
				options[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
