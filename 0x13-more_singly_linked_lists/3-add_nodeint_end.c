#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t
 *@head: input of type listint_t
 *@n: input of type int
 *Return: a new node of type listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *node;

	last_node = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = NULL;

		if (last_node == NULL)
		{
			*head = node;
			return (node);
		}
		else
		{
			while (last_node->next != NULL)
			{
				last_node = last_node->next;
			}
			last_node->next = node;
		}
	}
	return (node);
}
