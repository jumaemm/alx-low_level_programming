#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: input string
 * @accept: target string
 * Return: length of resulting substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len_accept = 0, len_sub = 0;

	while (accept[len_accept] != '\0')
	{
		len_accept++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				len_sub++;
				j = len_accept;
			}
			else if (j == len_accept - 1)
			{
				return (len_sub);
			}
		}
	}
	return (len_sub);
}
