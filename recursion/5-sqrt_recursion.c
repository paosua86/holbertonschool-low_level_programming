#include <stdio.h>
#include "main.h"

/**
 * 14  * _number_square - function that gets square
 * 13  * @x: enteger
 * 12  * @y: entegerCounter variable
 * 11  * Return: enteger
 * 10  */

int number_square(int x, int y)
{
	if (x == (y * y))
		return (y);
	else if (x > (y * y))
	  return (number_square(x, y + 1));
	else
	  return (-1);
}

/**
	* _sqrt_recursion -  returns the natural square root of a number
	* @n: integer
	* Return: depends
	*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (number_square(n, 1));
}


/**
 * _number_square - function that gets square
 * @x: enteger
 * @y: entegerCounter variable
 * Return: enteger
 */

