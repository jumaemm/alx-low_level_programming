#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiple of two arsg
 * @argc: count of args
 * @argv: array of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", (a * b));
	}
	return (0);
}
