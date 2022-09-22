#include "main.h"

/**
 * *string_toupper - change all lowercase
 * chars to uppercase
 * @s: string to be converted
 * Return: Uppercased string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/* ASCII a = 95, z = 122*/
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
