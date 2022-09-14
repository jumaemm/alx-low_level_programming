#include "main.h"

/**
 * times_table - print 9 times table
 * Return: 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if ((k / 10) == 0)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				if (j != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');

				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
