#include "lists.h"

/**
 * add_nodeint - Write a function that adds a
 * new node at the beginning of a listint_t list
 * @n: elements of list
 * @head: head
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
