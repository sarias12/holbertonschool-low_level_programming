#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: list
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			aux = *head;
			*head = aux->next;
			free(aux);

		}
	}
}
