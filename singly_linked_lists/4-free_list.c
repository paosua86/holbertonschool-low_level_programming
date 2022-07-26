#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list
 * @head: pointer to a list
 * Return: nothing
 */

void free_list(list_t *head)
{

	list_t *tmp;

	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}


