#include "lists.h"
/**
 * listint_len - function that prints all the elements of a list_t list.
 * @h: list.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
