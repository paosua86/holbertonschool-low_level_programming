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
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
