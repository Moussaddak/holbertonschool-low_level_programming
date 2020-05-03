#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n) of a linked list.
 *@head: input of type dlistint_t
 *Return: returns the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (!node)
	{
		return (0);
	}
	else
	{
		while (node)
		{
			sum += node->n;
			node = node->next;
		}
		return (sum);
	}
}
