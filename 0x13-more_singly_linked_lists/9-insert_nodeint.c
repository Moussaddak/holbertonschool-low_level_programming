#include "lists.h"
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

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	else
	{
		if (!node)
		{
			*head = new;
			new->next = NULL;
			return (new);
		}
		else
		{
			while (node)
			{
				if (i == idx)
				{
					new->n = n;
					new->next = node;
					for (j = 0; j < idx - 1; j++)
					{
						p_node = p_node->next;
					}
					p_node->next = new;
					return (new);
				}
				else
				{
					node = node->next;
					i++;
				}
			}
			return (NULL);
		}
	}
}
