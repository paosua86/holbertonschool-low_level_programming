#include "lists.h"
/**
 * free_dlistint - Write a function that frees a dlistint_t list
 * @head: head pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
