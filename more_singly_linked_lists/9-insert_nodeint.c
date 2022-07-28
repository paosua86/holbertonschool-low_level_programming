#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function
 * that inserts a new node at a given position
 * @idx: the index of the list where the new
 * node should be added. Index starts at 0
 * @n: int
 * @head: pointer to head
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		idx--;
		while (idx > 0 && tmp != NULL)
		{	
			tmp = tmp->next;
			idx--;
		}
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
