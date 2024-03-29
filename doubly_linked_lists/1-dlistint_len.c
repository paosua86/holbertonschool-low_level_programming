#include "lists.h"
/**
 * dlistint_len - Write a function that
 * returns the number of elements in a linked dlistint_t list
 * @h: list
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
