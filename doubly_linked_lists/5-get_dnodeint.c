#include "lists.h"
/**
 * get_dnodeint_at_index - Write a function that
 * returns the nth node of a dlistint_t linked list
 * @index:  is the index of the node, starting from 0
 * @head: head
 * Return: NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;

	while (index > 0)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
