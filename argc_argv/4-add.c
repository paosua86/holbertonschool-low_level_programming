#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - write a program that multiplies two numbers
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum, j, i;

	if (argc < 2)
		printf("0\n");

	else if (argc > 1)
	{
		for (i = 1; argc > i; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if(!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
			
