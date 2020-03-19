#include "lists.h"
/**
 * list_len - function that prints all the elements of a list_t list.
 * @h: list.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
