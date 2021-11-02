#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: &x
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	x = malloc(sizeof(dog_t));
	if (!x)
		return (NULL);
	x->age = age;
	x->name = strdup(name);
	if (!x->name)
		return (NULL);
	x->owner = strdup(owner);
	if (!x->owner)
		return (NULL);
	return (x);
}
