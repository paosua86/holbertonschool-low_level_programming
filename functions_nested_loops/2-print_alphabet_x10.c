#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: print alphabet 10 times
 * Return: zero
 */

void print_alphabet_x10(void)

{

	char r;
	int a = 0;

	while (a < 10)
	{
		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
		a++;
	}
}
