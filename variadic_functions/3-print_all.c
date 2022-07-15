#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: prints anything
 */

void print_all(const char * const format, ...)
{
	va_list p_all;
	int i = 0;

	va_start(p_all, format);
	
	while (format[i] && format != NULL)
	{
		switch (format[i])
		{	
			case 'c':
				printf("%s", va_arg(p_all, char*));
				break;
			case 'i':
				printf("%d", va_arg(p_all, int));
				break;
			case 'f':
				printf("%f", va_arg(p_all, double));
				break;
			case 's':
				if (va_arg(p_all, char*) == NULL)
					printf("nill");
				printf("%s", va_arg(p_all, char*));

		/*if (separator != NULL && i < (n - 1))
			printf("%s", separator);
		if (strings == '\0')
			printf("nil");*/	
		}
	i++;
	}
	printf("\n");
	va_end(p_all);
}
