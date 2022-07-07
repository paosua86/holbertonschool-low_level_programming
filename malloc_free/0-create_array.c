#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: int
 * @c: char
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	a = malloc(sizeof(char) * size);

	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(a + i) = c;
	}

	return (a);
}
