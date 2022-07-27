#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns
 * the nth node of a listint_t linked list
 * @head: head
 * @index: is the index of the node, starting at 0
 * Return: new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	while (index > 0)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
