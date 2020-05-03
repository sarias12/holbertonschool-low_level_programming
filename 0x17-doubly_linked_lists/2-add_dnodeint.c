#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a dlistint_t list.
 * @head: list.
 * @n: list element
 * Return: the number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
