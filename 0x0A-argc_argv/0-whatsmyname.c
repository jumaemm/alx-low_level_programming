#include <stdio.h>

/**
 * main - print program name
 * @argc: count of args
 * @argv: array of all args
 * Return: Always o
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
