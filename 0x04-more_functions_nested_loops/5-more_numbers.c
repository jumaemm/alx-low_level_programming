#include "main.h"

/**
 * more_numbers - print 0-14 10x
 * Return: null
 */
void more_numbers(void)
{
	int c;
	int i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
	}
	_putchar('\n');
}
