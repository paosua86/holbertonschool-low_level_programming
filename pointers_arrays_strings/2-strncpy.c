#include "main.h"
/**
 * _strncpy - Write a function that copies a string
 * @src: pointer that has the string to be concatenated
 * @dest: pointer that will have its string concatenated with the other
 * Return: strings concatenated to dest
 * @n: number of characters
 */

char *_strncpy(char *dest, char *src, int n)
{
		int i;

		for (i = 0; i < n && src[i] != 0; i++)
		{
			dest[i] = src[i];
		}
		for (; i < n; i++)
		{
			dest[i] = 0;
		}
		return (dest);
}
