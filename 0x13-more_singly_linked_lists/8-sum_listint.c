#include "lists.h"
/**
 *sum_listint - returns the sum of all the data (n) of a linked list.
 *@head: input of type listint_t
 *Return: returns the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
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
