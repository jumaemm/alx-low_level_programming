#include "main.h"
/**
 * print_diagonal - print diagonal slashe
 * @n: number of times to repeat
 * Return: null
 */
void print_diagonal(int n)
{
	if (n > 0)
	{

		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			if (i != n)
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
