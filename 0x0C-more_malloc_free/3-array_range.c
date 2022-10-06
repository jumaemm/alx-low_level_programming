#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates array of ints
 * @min: minimum array value
 * @max: max array value
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int i, j, size;
	int *n;

	if (min > max)
		return (0);
	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	n = malloc(sizeof(int) * size);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0, j = min; j <= max; i++, j++)
	{
		n[i] = j;
	}
	if (max == min)
		n[i] = max;
	return (n);
}
