#include <stdio.h>
#include <stdlib.h>

/**
 * main - print ints as chars
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		/*ASCII for digit 0 is 48*/
		putchar(48 + i);
	}
	putchar('\n');
	return (0);
}
