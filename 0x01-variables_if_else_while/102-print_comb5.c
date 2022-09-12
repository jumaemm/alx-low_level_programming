#include <stdio.h>

/**
 * main - combos of two print
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;
	
	/*0 = 48, 9 = 57*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (((k + l) > (i + j) && k >= i) || i < k)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					/*9 + 8 + 9 + 9*/
					if (i + j + k + l == 227 && i == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
