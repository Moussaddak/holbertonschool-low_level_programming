#include "lists.h"
#include <stdio.h>
/**
 *list_len - prints number of elements in a linked
 *@h: input of type list_t
 *Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cpt_n = 0;

	while (h != NULL)
	{
		h = h->next;
		cpt_n++;
	}
	return (cpt_n);
}
