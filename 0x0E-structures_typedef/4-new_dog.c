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
	int i, j;

	x = malloc(sizeof(dog_t));
	if (!x)
		return (NULL);
	x->age = age;
	x->name = malloc(strlen(name) + 1);
	if (!x->name)
	{
		free(x);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		x->name[i] = name[i];
	x->owner = malloc(strlen(owner) + 1);
	if (!x->owner)
	{
		free(x);
		free(x->name);
		return (NULL);
	}
	for (j = 0; owner[j]; j++)
		x->owner[j] = owner[j];
	return (x);
}
