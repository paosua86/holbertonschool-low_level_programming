#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: depends
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char*));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		if (va_arg(strings, char*) == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(strings);
}
