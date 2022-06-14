#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Description: This function prints the alphabet in lowercase
 * Return: zero, and the letters
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
