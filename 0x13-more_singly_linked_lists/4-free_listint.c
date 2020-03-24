#include "lists.h"
/**
 *free_listint - frees a listint_t list.
 *@head: input of type listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *var;

	while (head != NULL)
	{
		var = head;
		head = head->next;
		free(var);
	}
}
