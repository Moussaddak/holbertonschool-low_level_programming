#include "lists.h"
/**
 *add_nodeint - prints number of elements in a linked
 *@head: input of type listint_t
 *@n: input of type str
 *Return: a new node of type listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
