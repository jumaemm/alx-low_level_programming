#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: destination string for concat
 * @src: first string
 * @n: max number of bytes
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
