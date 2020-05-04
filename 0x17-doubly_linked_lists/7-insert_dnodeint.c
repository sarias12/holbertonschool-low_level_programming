#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position)
 * @h: list.
 * @idx: Position for add new node.
 * @n: Element of the list.
 * idx
 * Return: The address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmp_node = *h;

	i = 0;
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h != NULL)
	{
		while (i < idx)
		{
		tmp_node = tmp_node->next;
			if (tmp_node == NULL)
				return (NULL);
			i++;
		}
	}
	if (tmp_node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->n = n;
	new_node->prev = tmp_node->prev;
	new_node->next = tmp_node;
	tmp_node->prev->next = new_node;
	tmp_node->prev = new_node;

	return (new_node);
}
