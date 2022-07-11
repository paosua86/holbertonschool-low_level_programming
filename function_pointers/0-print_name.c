#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name.
 * @name: char
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
