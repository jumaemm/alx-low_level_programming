#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory of struct
 * @d:dog to be freed
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
