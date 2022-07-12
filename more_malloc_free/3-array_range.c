#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 * @min: int
 * @max: int
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(array) * ((max - min) + 1));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
