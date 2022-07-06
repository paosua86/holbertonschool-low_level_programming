#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Write a function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: char
 * Return: a
 */

char *_strdup(char *str)
{
	int i, len;
	char *a;

	if (str == 0)
	{
		return (0);
	}
	for (len = 0; str[len] != 0; len++)
	{
	}
	len++;
	a = malloc(sizeof(char) * len);
	if (a == 0)
	{
	return (0);
	}
	for (i = 0; i <= len; i++)
	{
	a[i] = str[i];
	}
	return (a);
}
