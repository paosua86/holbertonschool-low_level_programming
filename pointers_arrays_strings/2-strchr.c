#include "main.h"
#include <stdio.h>
/**
 * _strchr - Write a function that locates a character in a string
 * @s: pointer
 * @c: pointer
 * Return: s
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
