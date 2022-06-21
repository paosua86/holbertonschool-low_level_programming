#include "main.h"
/**
 * puts2 - Write a function that
 * prints half of a string, followed by a new line
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;

	j = i / 2;

	if (i % 2 == 1)
		j++;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
