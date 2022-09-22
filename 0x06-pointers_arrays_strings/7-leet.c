#include "main.h"

/**
 * *leet - encode string to 1337
 * @s: string array to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leet_values[] = {'4', '3', '0', '7', '1'};
	char uppercase_letters[] = {'A', 'E', 'O', 'T', 'L'};
	char lowercase_letters[] = {'a', 'e', 'o', 't', 'l'};

	i = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == uppercase_letters[j] || s[i] == lowercase_letters[j])
			{
				s[i] = leet_values[j];
			}
		}
	}
	return (s);
}
