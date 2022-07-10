#include "dog.h"
#include <stdlib.h>


/**
 * _strcpy - copy string
 * @src: string source
 * @dest: string destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - length of string
 * @s: string
 * Return: num
 */

int _strlen(char *s)
{

	int num;

	for (num = 0; *s != '\0'; num ++, s++)
	{
	}
	return (num);

}


/**
 * new_dog - Write a function that creates a new dog
 * @name: char name of dog
 * @age: float age of dog
 * @owner: char owner
 * Return: new string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_name = malloc(sizeof(char) + _strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) + _strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
