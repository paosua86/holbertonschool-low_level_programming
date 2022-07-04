#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Write a program that prints all arguments it receives
 * @argc: argument count
 * @argv: vector
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i; 

	if (argc > 0)
	{
		for(i = 0; argc > i; i++)
		{
			printf("%s\n", argv[i]);
		}	
	}
	return (0);
}
