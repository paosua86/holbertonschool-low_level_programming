#include "lists.h"

/**
 * sum_listint - Write a function that returns
 * the sum of all the data (n) of a listint_t linked list
 * @head: head pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
