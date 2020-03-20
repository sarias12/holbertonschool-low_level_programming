#include "lists.h"
/**
 * add_node_end - function that adds a new node at the beginning of a list_t list.
 * @head: address list.
 * @str: string.
 * Return: the number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int i;
	list_t *aux = *head;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
		}
		new_element->str = strdup(str);
		new_element->len = i;
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
