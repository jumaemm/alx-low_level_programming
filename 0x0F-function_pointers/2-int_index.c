#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: input array
 * @size: number of elements in array
 * @cmp: pointer to comparison function
 * Return: index of searched int in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index)
			{
				return (i);
			}
		}
	}
	return (-1);
}
