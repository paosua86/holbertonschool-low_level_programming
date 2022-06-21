#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer
 *
 * @b: pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
