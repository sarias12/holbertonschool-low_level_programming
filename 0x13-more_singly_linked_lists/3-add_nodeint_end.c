#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: address list.
 * @n: integer.
 * Return: new element of list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *aux = *head;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	else
	{
		new_element->n = n;
		new_element->next = NULL;
		if (*head == NULL)
		{
			*head = new_element;
			return (*head);
		}

		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new_element;

	}
	return (new_element);
}
