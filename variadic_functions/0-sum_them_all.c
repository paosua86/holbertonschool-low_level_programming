#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters
 * @n: const unsigned int
 * Return: depends
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum;


	if (n == 0)
		return 0;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
