#include "main.h"

/**
 * **alloc_grid - returns pointer to 2D array of ints
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int *arr, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(sizeof(int) * (width * height));
	if (arr == 0)
		return (0);

	for (; i  < (width * height); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
