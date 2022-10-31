#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: pointer to binary args
 * Return: converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = 0, power;

	if (b[length] == '\0')
	{
		return (0);
	}
	while (b[length] != '\0')
		length++;
	for (length--, power = 1; length >= 0; length--, power *= 2)
	{
		if ((b[length] != '0') && (b[length] != '1'))
			return (0);

		if (b[length] == '1')
		{
			result += power;
		}
	}
	return (result);
}
