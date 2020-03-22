#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints all the elements of a list_t list
 *@h: input of type list_t
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cpt_n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		cpt_n++;
	}
	return (cpt_n);
}
