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
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);
		if (str)
		printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
