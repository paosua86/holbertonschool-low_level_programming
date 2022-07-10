#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Write a function that frees dogs
 * @d: pointer
 * Return:
 */


void free_dog(dog_t *d)
{
	dog_t *fdog = d;

	if (d != 0)
	{
		free(fdog->name);
		free(fdog->owner);
		free(fdog);
	}
}
