#include "lists.h"

/**
 * add_node_end - Write a function that adds a new node
 * at the end of a list_t list
 * @str: string
 * @head: doble pointer to a lined list
 * Return: new_node_end
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node_end = NULL;
	list_t *tmp;

	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->len = strlen(str);
	new_node_end->str = strdup(str);
	new_node_end->next = NULL;
	if (*head == NULL)
		*head = new_node_end;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node_end;
	}
	return (new_node_end);
}
