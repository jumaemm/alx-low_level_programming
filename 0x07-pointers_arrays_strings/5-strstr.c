#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be searched
 * @needle: target substring
 * Return: pointer to beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
			i++;
		}
		/*Entire substring located*/
		if (*needle == '\0')
		{
			/*Beginning of substring*/
			return (haystack - i);
		}
		/*If iteration occured in while loop above but needle wasnt found, reset */
		haystack -= (i - 1);
		needle -= i;
	}
	return ('\0');
}
