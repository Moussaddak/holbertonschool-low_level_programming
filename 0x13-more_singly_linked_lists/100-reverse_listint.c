#include "lists.h"
/**
  *reverse_listint - reverses a listint_t linked list
  *@head: input
  *Return: return a list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *node = *head, *n;

	while (node)
	{
	n = node->next;
	node->next = p;
	p = node;
	node = n;
	}
	*head = p;
	return (*head);
}
