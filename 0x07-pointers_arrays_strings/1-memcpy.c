#include "main.h"

/**
 * *_memcpy - copies n bytes from src to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
