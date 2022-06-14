#include <stdio.h>
/**
 * main - prints all hexadecimal numbers
 * Description: prints all numbers
 * of base 16 using 4 putchar
 * Return: 0 and the numbers
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
