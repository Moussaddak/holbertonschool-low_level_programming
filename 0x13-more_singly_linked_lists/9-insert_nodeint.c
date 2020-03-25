#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n);
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: input of type listint_t
 *@idx: index of insert the new node
 *@n: input value of a new node
 *Return: returns the sum of all the data (n).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head, *p_node = *head, *new;
	unsigned int i = 0, j;

	while (node)
	{
		node = node->next;
		i++;
	}
	if (i == 0)
	{
		new = add_nodeint(head, 0);
		return (new);
	}
	else if (i == idx)
	{
		new = add_nodeint_end(head, idx);
		return (new);
	}
	else if (idx > i)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; j < idx - 1; j++)
			{
				p_node = p_node->next;
			}
			new->n = n;
			new->next = (p_node->next)->next;
			p_node->next = new;
			return (new);
		}
	}
}
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
