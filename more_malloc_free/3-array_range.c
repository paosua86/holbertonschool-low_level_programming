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
	int *array = NULL;
	int i, count;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	array = malloc(sizeof(int) * count);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < count; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
