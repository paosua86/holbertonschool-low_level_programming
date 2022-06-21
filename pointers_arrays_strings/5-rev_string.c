#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: pointer
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
		i++;

	i--;

	for (j = 0; j <= 1; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
