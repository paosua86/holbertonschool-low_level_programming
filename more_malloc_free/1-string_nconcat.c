#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Write a function that
 * concatenates two strings
 * @s1: first string.
 * @s2: second string
 * @n: int is greater or equal to the length of s2
 * then use the entire string s2
 * Return: pointer of an array of chars
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens1, i;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}

	lens1 = strlen(s1);

	concat = malloc(sizeof(char) * lens1 + n + 1);

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (i = 0; i < lens1 + n; i++)
	{
		if (i < lens1)
		{
			concat[i] = s1[i];
		}
		else
		{
			concat[i] = s2[i - lens1];
		}
	}
	concat[i] = '\0';

	return (concat);
}
