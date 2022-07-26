#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int count;

	for (count = 0; str[count]; count++)
		;
	return (count);
}

/**
 * add_node - Write a function that prints all the elements of a list_t list
 * @str: string
 * @head: doble pointer to a lined list
 * Return: new_node
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	new_node->len = _strlen(new_node->str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
