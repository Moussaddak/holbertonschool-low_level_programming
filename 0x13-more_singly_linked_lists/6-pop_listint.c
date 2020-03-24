#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: input of type listint_t
 *Return:  returns the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *var;
	int n;

	if (!*head)
	{
		return (0);
	}
	else
	{
		var = *head;
		*head = (*head)->next;
		n = var->n;
		free(var);
		return (n);
	}
}
