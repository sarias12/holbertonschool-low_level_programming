#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: list
 * @index: index of node.
 * Return: the head node’s data (n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
	unsigned int i = 0;

	while (aux)
	{
		i++;
		aux = aux->next;
	}
	if (index >= i)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < index ; i++)
			head = head->next;
	}
	return (head);
}
