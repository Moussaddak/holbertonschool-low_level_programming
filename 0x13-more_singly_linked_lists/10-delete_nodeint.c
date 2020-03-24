#include "lists.h"
/**
 *delete_nodeint_at_index -deletes the node at index index of a linked list
 *@head: input of type listint_t
 *@index: index of node to be deleted
 *Return:  returns success (1) or fails (-1).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head, *nb_node = *head, *p_node, *hf;
	unsigned int n = 0;

	if (!*head)
	{
		return (-1);
	}
	else
	{
		while (nb_node)
		{
			nb_node = nb_node->next;
			n++;
		}
		if (index == 0)
		{
			pop_listint(head);
			return (1);
		}
		else if (index > n)
		{
			return (-1);
		}
		else
		{
			p_node = *head;
			for (n = 0; n < index - 1; n++)
			{
				p_node = p_node->next;
			}
			hf = p_node->next;
			node = hf->next;
			p_node->next = node;
			free(hf);
			return (1);
		}
	}
}
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
