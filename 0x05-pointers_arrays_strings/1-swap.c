#include "main.h"

/**
 * swap_int - swap values of two ints
 * @a: first int
 * @b: second int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp_int;

	temp_int = *a;
	*a = *b;
	*b = temp_int;
}
