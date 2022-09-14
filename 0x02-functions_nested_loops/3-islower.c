#include "main.h"

/**
 * _islower - return whether c is lowercase
 * @c: character to be compared
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
