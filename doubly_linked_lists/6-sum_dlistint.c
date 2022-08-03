#include "lists.h"
/**
 * sum_dlistint - Write a function that
 * returns the sum of all the data (n) of a dlistint_t linked list
 * @head: head
 * Return: 0 or int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);

	tmp = head;
	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
