#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns pointer to 2D array of ints
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, flag_check = 0;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(sizeof(int) * height);
	if (arr == 0)
		return (0);

	for (i = 0; i  < height; i++)
	{
		*(arr + i) = malloc(sizeof(int) * width);
		if (*(arr + i) == 0)
		{
			flag_check = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	if (flag_check == 1)
	{
		for (k = 0; k < i; k++)
		{
			free(*(arr + k));
		}
		free(arr);
	}
	return (arr);
}
