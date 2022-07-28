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
	listint_t *tmp;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	i = 0;
	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (idx > 0 && tmp != NULL)
	{
		tmp = tmp->next;
		if (tmp == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
