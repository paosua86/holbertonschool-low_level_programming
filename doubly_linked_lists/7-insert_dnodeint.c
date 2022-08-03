#include "lists.h"
/**
 * insert_dnodeint_at_index - Write a function
 * that inserts a new node at a given position
 * @idx: he index of the list where the new
 * node should be added. Index starts at 0
 * @n: data
 * @h: head
 * Return: NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	tmp = *h;
	while (idx > 1 && tmp->next)
		idx--, tmp = tmp->next;
	if(idx == 1)
	{
		if (!tmp->next)
			new->next = NULL;
		else
		{
			new->next = tmp->next;
			tmp->next->prev = new;
		}
		new->prev = tmp;
		tmp->next = new;
		return (new);
	}
	else
		return (new);
}
