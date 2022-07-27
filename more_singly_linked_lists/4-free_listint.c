#include "lists.h"

/**
 * add_nodeint - Write a function that adds a
 * new node at the beginning of a listint_t list
 * @n: elements of list
 * @head: head
 * Return: new node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
