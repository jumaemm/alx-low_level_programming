#include "main.h"

/**
 * print_rev - print reverse of given string
 * @s: string to be checked
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int size;

	/* find length of the string first*/
	size = _strlen(s);

	/* reverse - iterate over the string */
	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
