#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a
 * value in a sorted array of integers using the Binary search algorithm
 * @array:  is a pointer to the first element of
 * the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: 1 or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, i;

	if (array == NULL)
		return (-1);

	size--;
	while (low <= size)
	{
		printf("Searching in array: ");
		for (i = low; i <= size; i++)
		{
			printf("%d", array[i]);
			if (i != size)
				printf(", ");
			else
				printf("\n");
		}
		mid = (low + size) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			size = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

