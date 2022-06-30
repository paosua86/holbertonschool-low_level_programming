#include <stdio.h>
#include "main.h"
/**
	* _sqrt_recursion -  returns the natural square root of a number
	* @n: integer
	* Return: depends
	*/

int _sqrt_recursion(int n)
{
	int sqrt = n / 2;
	int temp = 0;

	if (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (n / temp + temp) / 2;
		return sqrt;
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (0);
}
