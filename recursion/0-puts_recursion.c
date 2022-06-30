#include <stdio.h>
#include "main.h"
/**
	* _puts_recursion(char *s) - prints string
	*	@s: pointer
	*	Return: zero
	*/

void _puts_recursion(char *s)
{
	int i;

	if (i <= 1)
		return (1);
	return i * _puts_recursion(i - 1)
		_putchar(s[i]);
	return (0);
}
