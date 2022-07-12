#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	unsigned int ls1, ls2, lconcat, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
	{}

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
	{}

	if (n > ls2)
		n = ls2;

	lconcat = ls1 + n;

	concat = malloc(sizeof(concat) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < lconcat; i++)
		if (i < ls1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - ls1];

	concat[i] = '\0';

	return (concat);
}
