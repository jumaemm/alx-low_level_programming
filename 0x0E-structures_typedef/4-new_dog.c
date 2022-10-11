#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: input string
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
	{
		return (0);
	}

	len = 0;
	while (*(str + len))
		len++;

	s = malloc(sizeof(char) * l + 1);
	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i <= len; i++)
	{
		*(s + i) = *(str + i);
	}
	return (s);
}
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
	dog_two->name = _strdup(name);
	if (dog_two->name == 0)
	{
		free(dog_two);
		return (0);
	}
	dog_two->age = age;
	dog_two->owner = _strdup(owner);
	if (dog_two->owner == 0)
	{
		free(dog_two->owner);
		free(dog_two);
		return (0);
	}
	return (dog_two);
}
