#include "dog.h"

/**
 * init_dog - initialize a variable of type dog
 * @d: dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
