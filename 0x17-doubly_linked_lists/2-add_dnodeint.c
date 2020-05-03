#include "lists.h"
/**
 *add_dnodeint - prints number of elements in a dlinked list
 *@head: input of type dlistint_t
 *@n: input of type integer
 *Return: a new node of type dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
	}

	return (new_node);
}
