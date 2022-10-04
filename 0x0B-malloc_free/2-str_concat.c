#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k = 0;
	char *s3;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == 0)
		return (0);

	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}

	for (; k < i + j; k++)
	{
		s3[k] = s2[k - i];
	}
	s3[k] = '\0';
	return (s3);
}
