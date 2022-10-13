#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform basic math operations
 * @argc: count of args
 * @argv: array of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*f)(int, int);/*pointer to our simple op_funcs*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	z = f(x, y);
	printf("%d\n", z);
	return (0);
}
