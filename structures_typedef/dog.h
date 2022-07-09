#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>

/**
 * struct dog - structure
 * @name: char name of dog
 * @age: float age of dog
 * @owner: char owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* #ifndef DOG_H */
