#ifndef STRUCTS
#define STRUCTS

/**
 * struct dog - dog data structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: oener of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
char *_strdup(char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
