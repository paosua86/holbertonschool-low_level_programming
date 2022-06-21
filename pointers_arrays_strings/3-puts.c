#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string
 * followed by a new line, to stdout
 * @str: pointer
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
