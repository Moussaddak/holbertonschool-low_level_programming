#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: input of type dlistint_t
 *@index: index of seeking node
 *Return:  returns the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int n = 0;

	if (!node)
	{
		return (NULL);
	}
	else
	{
		while (node)
		{
			if (n == index)
			{
				return (node);
			}
			else
			{
				node = node->next;
				n++;
			}
		}
		return (NULL);
	}
}
