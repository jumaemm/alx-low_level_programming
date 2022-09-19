#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j;
	int size;
	char tempChar;

	/*Evaluate length*/
	for (size = 0; s[size] != '\0'; size++)
	{
	}

	j = size - 1;
	i = 0;

	while (j < i)
	{
		tempChar = s[i];
		s[i] = s[j];
		s[j] = tempChar;
		j--;
		i++;
	}
}
