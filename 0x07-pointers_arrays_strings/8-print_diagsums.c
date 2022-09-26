#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of matrix
 * @a: input array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_left = 0, sum_right = 0;

	/*Multi-dimensional arrays are stored linearly in memory*/
	for (i = 0, j = size - 1; i < (size * size); i += size + 1, j += size - 1)
	{
		sum_left += a[i];
		sum_right += a[j];
	}
	printf("%d, %d\n", sum_left, sum_right);
}
