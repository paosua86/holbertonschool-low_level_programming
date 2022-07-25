#include "lists.h"

/**
 * list_len - Write a function that returns the
 * number of elements in a linked list_t list
 * @h: list
 * Return: count
 */

size_t list_len(const list_t *h)
{

	int count;

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
