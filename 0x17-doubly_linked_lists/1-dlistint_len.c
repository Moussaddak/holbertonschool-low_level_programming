#include "lists.h"
/**
 *dlistint_len - prints number of elements in a double linked list
 *@h: input of type dlistint_t
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cpt_n = 0;

	while (h != NULL)
	{
		h = h->next;
		cpt_n++;
	}
	return (cpt_n);
}
