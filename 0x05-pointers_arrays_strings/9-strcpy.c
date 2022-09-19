#include "main.h"

/**
 * *_strcopy - copy string from src to destination
 * @src: source string
 * @dest: destination string
 * Return: Destination string
 */
char *_strcopy(char *dest, char *src)
{
	int i, size;

	for (size = 0; src[size] != '\0'; size++)
	{
	}

	/*Loop including \\0 char*/
	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
