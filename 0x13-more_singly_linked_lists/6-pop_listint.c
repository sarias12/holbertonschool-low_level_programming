#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (head != NULL)
	{
		aux = *head;
		*head = aux->next;
		n = aux->n;
		free(aux);
		return (n);
	}
	else
	{
		return (0);
	}
}
