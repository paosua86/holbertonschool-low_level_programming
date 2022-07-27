#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 * @head: head
 * Return: new node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
