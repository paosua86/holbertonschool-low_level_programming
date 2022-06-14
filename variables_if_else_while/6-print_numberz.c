#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints base 10 numbers
 * Description prints numbers 0-9
 * Return: 0 for success
 * Enfoque: La idea es utilizar el valor 
 * ASCII de los dígitos del 
 * 0 al 9 comenzando desde 48 - 57
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
