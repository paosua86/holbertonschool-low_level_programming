#include <stdio.h>
#include "main.h"
/**
	* _strlen_recursion - returns the length of a string
	* @s: pointer
	*	Return: zero
	*/

int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (++i);
	}
	return (i);
}
