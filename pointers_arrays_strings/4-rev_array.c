#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be evaluated
 * @n: size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (j = 0; j < n; j++)
	{
	}
	j--;

	for (i = 0; i <= j; j--, i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
