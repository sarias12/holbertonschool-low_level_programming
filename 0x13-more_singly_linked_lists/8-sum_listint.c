#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: list
 * Return:  the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head)
		{
			i += head->n;
			head = head->next;
		}
	}
	return (i);
}
