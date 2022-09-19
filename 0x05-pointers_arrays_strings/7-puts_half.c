#include "main.h"

/**
 * puts_half - Print half a string
 * @str: String to be printed
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, size, half;

	for (size = 0; str[size] != '\0'; size++)
	{
	}
	if (size % 2 == 0)
	{
		half = size / 2;
	}
	else
	{
		half = (size - 1) / 2;
	}
	for (i = half; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
