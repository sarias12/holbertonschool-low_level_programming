#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: address list.
 * @n: integer.
 * Return: the number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	else
	{
		new_element->n = n;
		new_element->next = *head;
		*head = new_element;
	}
	return (new_element);
}
