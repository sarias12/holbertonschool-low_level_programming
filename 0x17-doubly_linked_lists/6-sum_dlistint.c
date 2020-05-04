#include "lists.h"
/**
 * sum_dlistint -  function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: list.
 * Return: sum of all elements n.
 */
int sum_dlistint(dlistint_t *head)
{
	int n;

	n = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
