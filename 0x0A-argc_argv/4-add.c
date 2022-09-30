#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * num_check - check if input is a number
 * @s: input string
 * Return: 0 or 1
 */
int num_check(char *s)
{
	int i = 0, j = 0, check_flag = 1;

	/* check for negative number*/
	if (*s == '-')
		i++;
	while (*(s + i) != 0)
	{
		j = isdigit(*(s + i));
		if (j == 0)
		{
			check_flag = 0;
			break;
		}
		i++;
	}
	return (check_flag);
}
/**
 * main - add args
 * @argc: count of args
 * @argv: array of args
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, error_flag = 0, count = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (num_check(argv[i]))
			{
				count += atoi(argv[i]);
			}
			else
				error_flag = 1;
		}
	}
	if (error_flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%i\n", count);
	return (0);
}
