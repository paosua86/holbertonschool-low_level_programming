#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Write a function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: size
 * Return: s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	
	char *sn = NULL;
	int j;
	unsigned int i, leng1, leng2, nnew = n;	

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	leng1 = strlen(s1);
	leng2 = strlen(s2);
	
	if (n >= leng2)
		nnew = leng2;

	sn = malloc(sizeof(sn) * (leng1 + nnew));

	for (i = 0; i != leng1 + nnew ; i++)
	{
		if (i < leng1)
			sn[i] = s1[i];
		else
		{
			sn[i] = s2[j];
			j++;
		}
	}
	sn[leng1 + nnew] = '\0';
	return (sn);
}

