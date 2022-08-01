#include "main.h"

/**
 * flip_bits - Write a function that returns the
 * number of bits you would need to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, checker = 1;
	unsigned int i = 0, j;

	difference = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (checker == (difference & checker))
			i++;
		checker <<= 1;
	}
	return (i);
}
