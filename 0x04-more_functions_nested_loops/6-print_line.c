#include "main.h"

/**
 * print_line - print line on terminal
 * @n: number of dashes
 * Return: null
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
