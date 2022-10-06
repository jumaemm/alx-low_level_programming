#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concat
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, length_s1 = 0, length_s2 = 0;
	char *s, *str_empty = "";

	if (s1 == NULL)
	{
		s1 = str_empty;
	}
	if (s2 == NULL)
	{
		s2 = str_empty;
	}
	while (*(s1 + length_s1))
	{
		length_s1++;
	}
	while (*(s2 + length_s2))
	{
		length_s2++;
	}
	if (n < length_s2)
		length_s2 = n;

	s = malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	if (s == 0)
	{
		return (0);
	}

	for (i = 0; i < length_s1; i++)
	{
		*(s + i) = *(s1 + i);
	}
	for (i = 0, j = length_s1; i < length_s2; i++, j++)
	{
		*(s + j) = *(s2 + i);
	}
	*(s + j) = '\0';
	return (s);
}
