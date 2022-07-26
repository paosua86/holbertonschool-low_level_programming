#include "lists.h"

/**
 * add_node - Write a function that prints all the elements of a list_t list
 * @str: string
 * @head: doble pointer to a lined list
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
