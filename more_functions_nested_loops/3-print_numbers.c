#include "main.h"

/**
 * print_numbers - function that prints the numbers
 * from 0 to 9, followed by a new lin
 * Return: character
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
