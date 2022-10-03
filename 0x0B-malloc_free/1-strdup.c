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
	unsigned int i = 0;
	char *s;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(sizeof(char) * (i + 1));

	if (s == 0)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
