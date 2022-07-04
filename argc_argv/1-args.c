#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that calls its name
 * @argc: argument count
 * @argv: vector
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
