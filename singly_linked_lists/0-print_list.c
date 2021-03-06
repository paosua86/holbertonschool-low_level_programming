#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list
 * @h: list
 * Return: count
 */

size_t print_list(const list_t *h)
{

	size_t count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (count);
}
