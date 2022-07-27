#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head
 * node of a listint_t linked list, and returns the head node’s data (n)
 * @head: head
 * Return: new node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
