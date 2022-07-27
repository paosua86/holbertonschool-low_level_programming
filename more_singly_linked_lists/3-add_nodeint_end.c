#include "lists.h"

/**
 * add_nodeint_end - Write a function that
 * iadds a new node at the end of a listint_t list
 * @n: elements of list
 * @head: head
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
