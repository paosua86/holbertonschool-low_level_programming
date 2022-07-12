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
	unsigned int i, j, k;
	char *nconcat;

	if (s1 == NULL)
		return ("");

	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}
	if (n <= j)
		k = n;

	nconcat = malloc(sizeof(nconcat) * (i + k + 1));
	if (nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		nconcat[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		nconcat[i] = s2[j];

	nconcat[i] = '\0';

	return (nconcat);
}
