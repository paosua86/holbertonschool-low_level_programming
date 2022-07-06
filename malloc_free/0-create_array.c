#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that creates an array of chars, and initializes it with a specific char
 * @size: int
 * @c: char
 * Return: 
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i; 

	if (size == '0')
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(a + i) = c;

	return (a);
}	

