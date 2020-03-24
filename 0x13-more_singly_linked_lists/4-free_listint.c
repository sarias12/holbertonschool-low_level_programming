#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 * @head: list
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
