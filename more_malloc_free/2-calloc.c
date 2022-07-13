#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  function allocates memory for an array
 * of nmemb elements of size bytes each and returns a
 * pointer to the allocated memory
 * @nmemb: int
 * @size: int
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	array = malloc(sizeof(array) * (nmemb * size));

	if (array == NULL)
	{
		/* free(array); */
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}
	return (array);
}
