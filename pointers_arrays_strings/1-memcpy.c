#include "main.h"
/**
 * _memcpy - Write a function that copies memory area
 * @dest: pointer that will update the value of n
 * @src: pointer
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
