#include "main.h"

/**
 * *_strncpy - copy source string to destination
 * @dest: destination string
 * @src: string to be copied from
 * @n: number of bytes from src string
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (n > j)
	{
		if (src[j] == '\0')
		{
			while (j < n)
			{
				dest[i] = '\0';
				i++;
				j++;
			}
		}
		else
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}
