#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: prints anything
 */

void print_all(const char * const format, ...)
{
	va_list p_all;
	int i = 0, j = 0; 
	char *str;
	char letter[] = {'c', 'i', 'f', 's'};

	va_start(p_all, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{	
			case 'c':
				printf("%c", va_arg(p_all, int));
				break;
			case 'i':
				printf("%d", va_arg(p_all, int));
				break;
			case 'f':
				printf("%f", va_arg(p_all, double));
				break;
			case 's':
				str = (va_arg(p_all, char*));
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} 
		for (j = 0; j < 4; j++)
		{	
			if ((letter[j] == format[i]) && format[i + 1])
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(p_all);
}
