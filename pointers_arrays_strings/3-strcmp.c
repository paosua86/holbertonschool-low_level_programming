#include "main.h"
/**
 * _strcmp - Write a function that compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: strings concatenated to dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] != '\0' && s2[i] != 0)
	{
		j = s1[i] - s2[i];
		if (j == 0)
		{
			i++;
		}
		else
		{
			break;
			return (j);
		}
	}
	return (j);
}
