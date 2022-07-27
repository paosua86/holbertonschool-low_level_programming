#include "lists.h"

/**
 * print_listint - Write a function that prints
 * all the elements of a listint_t list
 * @h: elements of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{

	int count;

	if (h == NULL)
		return (0);

	for (count = 0; h != NULL; count++)
	{
		if (h->n == '\0')
		{
			return ('\0');
			h = h->next;
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (count);
}
