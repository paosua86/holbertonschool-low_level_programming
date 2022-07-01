#include <stdio.h>
#include "main.h"
/**
 * number_prime - function that gets prime
 * @x: enteger
 * @y: enteger
 * Return: enteger
 */

int number_prime(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (number_prime(x, y + 1));
}
/**
	* is_prime_number -  returns a prime number
	* @n: integer
	* Return: depends
	*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n < 0)
	{
		return (number_prime(n, 2));
	}
	else
		return (1);
}
