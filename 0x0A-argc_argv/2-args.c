#include <stdio.h>

/**
 * main - print all args
 * @argc: count of args
 * @argv: array of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
