#include "function_pointers.h"
/**
 * array_iterator - Write a function that executes
 * a function given as a parameter on each element of an array
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * @array: int
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size >= 1 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
