#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a func on each array element
 * @array: input array
 * @size: size of the array
 * @action: function to execute
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
