#include <stdio.h>
#include "main.h"
/**
	* is_prime_number - returns prime number
	* @n: integer
	* @m: integer
	* Return: 0 or 1
 */

int prime_num(int n, int m)
{
		if (n == m)
		{
			return (1);
		}
		else if (n % m == 0)
		{
			return (0);
		}
		else
		{
			return (prime_num(n, m + 1));
		}
}
/*
 * prime_num - goes through every number to check if it is prime
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_num(n, 2));
}
