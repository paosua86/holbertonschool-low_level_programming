#include "main.h"
/**
 * main - function that prints the alphabet
 * Description: in lowercase, followed by a new line
 * @int: alphabet
 * Return: zero
 */
void print_alphabet(void);
{
	
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
