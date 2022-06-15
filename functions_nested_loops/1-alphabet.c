#include "main.h"
/**
 * main - function that prints the alphabet
 * Description: in lowercase, followed by a new line
 * @int: alphabet
 * Return: zero
 */
void print_alphabet(void)
{

	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
