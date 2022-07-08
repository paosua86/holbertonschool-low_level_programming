#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates
 * memory using malloc
 * @b: unsigned int
 * Return: s
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s =	malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
