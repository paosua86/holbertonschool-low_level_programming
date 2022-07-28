#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes
 * the node at index index of a listint_t linked list
 * @index:  is the index of the node that should be deleted. Index starts at 0
 * @head: pointer to head
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;

	node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		node = node->next;
		free(*head);
		*head = node;
	}
	else
	{
		index--;
		while (index > 0 && node != NULL)
		{
			node = node->next;
			index--;
		}
		if (node == NULL)
			return (-1);
		tmp = node;
		tmp = tmp->next->next;
		free(node->next);
		node->next = tmp;
	}
	return (1);
}
