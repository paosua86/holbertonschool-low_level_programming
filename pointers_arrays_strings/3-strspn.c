#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if (k == 0)
			break;
	}
	return (i);
}
