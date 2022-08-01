#include "main.h"

/**
 * get_bit - Write a function that returns
 * the value of a bit at a given index
 * @n: unsigned long int
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int statement, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	statement = 1 << index;
	checker = n & statement;
	if (checker == statement)
		return (1);
	return (0);
}
