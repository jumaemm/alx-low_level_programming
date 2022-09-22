#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination second string
 * @src: first string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
