#include "lists.h"
/**
 *delete_dnodeint_at_index -deletes the node at index index of a linked list
 *@head: input of type dlistint_t
 *@index: index of node to be deleted
 *Return:  returns success (1) or fails (-1).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *nb_node = *head, *p_node = *head, *tmp;
	unsigned int n = 0;

	if (!*head)
	{
		return (-1);
	}
	else
	{
		while (nb_node)
			nb_node = nb_node->next, n++;
		if (index == 0)
		{
			tmp = *head;
			*head = tmp->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
		else if (index > n)
		{
			return (-1);
		}
		else
		{
			for (n = 0; n < index - 1; n++)
				p_node = p_node->next;
			tmp = p_node->next;
			node = tmp->next;
			p_node->next = node;
			if (node)
				node->prev = p_node;
			free(tmp);
			return (1);
		}
	}
}
