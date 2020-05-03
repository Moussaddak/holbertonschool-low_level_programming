#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: input of type dlistint_t
 *@idx: index of insert the new node
 *@n: input value of a new node
 *Return: returns the sum of all the data (n).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *p_node = *h, *new;
	unsigned int i = 0, j;

	if (!h)
	{
		return (NULL);
	}
	while (node)
		node = node->next, i++;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx > i)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		for (j = 0; j < idx - 1; j++)
			p_node = p_node->next;
		new->n = n;
		new->next = p_node->next;
		if (p_node->next)
			(p_node->next)->prev = new;
		p_node->next = new;
		new->prev = p_node;
		return (new);
	}
}
