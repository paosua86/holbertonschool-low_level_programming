#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
