#include "main.h"

/**
 * _strlen - return length of string
 * @s: String to be checked
 * Return: Length of s
 */
int _strlen(char *s)
{
	int size;
	int i;

	size = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}
