#include "main.h"

/**
 * _puts - print all chars in a string
 * @str: string to be iterated over
 * Return: Always o
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
