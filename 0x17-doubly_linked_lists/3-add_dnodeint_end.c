#include "lists.h"
/**
 *add_dnodeint_end - adds a new node at the end of a dlistint_t
 *@head: input of type dlistint_t
 *@n: input of type int
 *Return: a new node of type dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node, *node;

	node = *head;

	last_node = malloc(sizeof(dlistint_t));
	if (last_node == NULL)
	{
		return (NULL);
	}
	else
	{
		last_node->next = NULL;
		last_node->n = n;

		if (*head == NULL)
		{
			last_node->prev = NULL;
			*head = last_node;
			return (last_node);
		}
		else
		{
			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = last_node;
			last_node->prev = node;
		}
	}
	return (last_node);
}
