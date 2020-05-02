#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list_t list.
 * @h: list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
