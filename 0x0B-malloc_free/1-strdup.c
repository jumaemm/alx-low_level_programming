#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return pointer to newly
 * allocated memory space
 * @str: Input string
 * Return: NULL or pointer to duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
	{
		return (0);
	}

	s = malloc(sizeof(str));

	if (s == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
