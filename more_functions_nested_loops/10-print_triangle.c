#include "main.h"
/**
 *  print_triangle - prints a triangle
 *  @size: number of times
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(32);
			for (j = i; j > 0; j--)
				_putchar(35);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);

	}
}
