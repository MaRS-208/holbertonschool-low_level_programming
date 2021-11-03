#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	free(my_dog);
	free(my_dog->name);
	free(my-dog->owner);
}
