#include "lists.h"

/**
 * listint_len - Write a function that returns the
 * number of elements in a linked listint_t list
 * @h: elements of list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
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
			h = h->next;
	}
	return (count);
}
