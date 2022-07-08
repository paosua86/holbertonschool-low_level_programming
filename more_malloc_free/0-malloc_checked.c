#include "main.h"
#include <stdlib.h>
/**
 * f - 
 * @
 * @
 * Return:
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s =	malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
