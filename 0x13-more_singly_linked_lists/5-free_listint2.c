#include "lists.h"
/**
 *free_listint2 - frees a listint_t list.
 *@head: input of type listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *var;

	if (!head)
	{
		*head = NULL;
		return;
	}

	while (!*head)
	{
		var = *head;
		*head = (*head)->next;
		free(var);
	}
}
