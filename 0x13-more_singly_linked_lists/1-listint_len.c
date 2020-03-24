#include "lists.h"
/**
 *listint_len -  returns the number of elements in a linked listint_t list
 *@h: input of type list_t
 *Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
