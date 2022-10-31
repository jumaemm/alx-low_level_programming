#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to binary args
 * Return: converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b[i] == '\0')
		return (0);
	while ((b[i] == '0') || (b[i] == '0'))
	{
		result <<= 1;
		result += b[i] - '0';
		i++;
	}
	return (result);
}
