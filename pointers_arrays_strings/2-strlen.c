#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer that will update the value of s
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
