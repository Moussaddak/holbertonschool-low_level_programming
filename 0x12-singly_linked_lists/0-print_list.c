#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints all the elements of a list_t list
 *@h: input of type list_t
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *next_node;
	size_t cpt_n = 0;

	next_node = h;

	while (next_node->next != NULL)
	{
		if (next_node->str != NULL)
		{
			printf("[%d] %s\n", next_node.len, next_node->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		next_node = next_node->next;
		cpt_n++;
	}
	return (cpt_n);
}
