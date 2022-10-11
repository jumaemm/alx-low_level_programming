#include "dog.h"
#include <string.h>

/**
 * *new_dog - creates a new dog object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t  *dog_two;

	dog_two = malloc(sizeof(struct dog));

	if (dog_two == 0 || name == 0 || owner == 0)
	{
		return (0);
	}
	dog_two->name = strdup(name);
	if (dog_two->name == 0)
	{
		free(dog_two);
		return (0);
	}
	dog_two->age = age;
	dog_two->owner = strdup(owner);
	if (dog_two->owner == 0)
	{
		free(dog_two->owner);
		free(dog_two);
		return (0);
	}
	return (dog_two);
}
