#include "main.h"

/**
 * binary_to_uint - Write a function that converts a
 * binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == 48 || b[i] == 49)
		{
			num <<= 1;
			if (b[i] == 49)
				num += 1;
		}
		else
			return (0);
	}
	return (num);
}
