#include "lists.h"
/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h: input of type dlistint_t
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cpt_n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cpt_n++;
	}
	return (cpt_n);
}
