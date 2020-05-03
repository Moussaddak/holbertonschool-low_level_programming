#include "lists.h"
/**
 *free_dlistint -  frees a dlistint_t list
 *@head: input of type dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
