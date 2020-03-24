#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: input of type listint_t
 *@index: index of seeking node
 *Return:  returns the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
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
