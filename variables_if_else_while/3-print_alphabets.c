#include <stdio.h>
/**
 * main - prints the alphabet in lower and uppercsae
 * Description: Prints the alphabet in lower and uppercase, using putchar
 * Return: 0 and the alphabet in lower and uppercase
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}



