#include "main.h"

/**
 * *_strchr - returns a pointer to
 * the first occurrence of a char in a string
 * @s: pointer to memory address
 * @c: char to be searched for
 * Return: pointer to result or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
