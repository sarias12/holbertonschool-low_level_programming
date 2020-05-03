#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list.
 * @head: list.
 * @n: list element
 * Return: new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_node = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
		if (*head != NULL)
		{
			while (tmp_node->next != NULL)
			{
				tmp_node = tmp_node->next;
			}
			new_node->prev = tmp_node;
			tmp_node->next = new_node;
		}
		else
		{
			new_node->prev = NULL;
			*head = new_node;
		}
	}
	return (new_node);
}
