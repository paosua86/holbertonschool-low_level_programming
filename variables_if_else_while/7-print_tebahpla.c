#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints base 10 numbers
 * Description prints numbers 0-9
 * Return: 0 for success
*/
int main(void)
{
	char letter = 'z';

		while (letter >= 'a')
		{
			putchar(letter);
			letter--;
		}
	putchar('\n');
	return (0);
}

