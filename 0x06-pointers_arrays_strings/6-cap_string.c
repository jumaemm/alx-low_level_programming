#include "main.h"

/**
 * *cap_string - Capitalize all letters in string
 * @s: String to be upcased
 * Return: Uppercase string
 */
char *cap_string(char *s)
{
	int i = 1;
	int j, seperator_check;
	int a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	while (s[i] != '\0')
	{
		/*First char of string*/
		if (s[0] > 96 && s[0] < 123)
		{
			s[0] -= 32;
		}
		if (s[i] > 96 && s[i] < 123)
		{
			j = 0;
			seperator_check = 0;

			while (seperator_check == 0 && j < 13)
			{
				if (s[i - 1] == a[j])
				{
					seperator_check = 1;
				}
				j++;
			}
			if (seperator_check == 1)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
