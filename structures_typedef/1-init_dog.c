#include "dog.h"

/**
 * init_dog - Write a function that
 * initialize a variable of type struct dog
 * @d: pointer structure
 * @name: char name of dog
 * @age: float age of dog
 * @owner: char owner of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
