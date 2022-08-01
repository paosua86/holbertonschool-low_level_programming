#include "main.h"

/**
 * clear_bit - Write a function that sets the
 * value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n = ((unsigned long int)(~(0x1 << index)) & *n);
	return (1);
}
