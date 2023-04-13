#include "search_algos.h"

/**
 * binary_search - perform binary search for an int
 * in an array of ints
 * @array: array to be searched in
 * @size: size of the array
 * @value: value to be searched for
 * Return: index of value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;

	}
	return (-1);
}
