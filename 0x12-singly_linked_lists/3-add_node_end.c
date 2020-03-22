#include "lists.h"
#include <string.h>
unsigned int _strlen(const char *s);
/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: input of type list_t
 *@str: input of type str
 *Return: a new node of type list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *first_node;

	first_node = *head;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}
	else
	{
		last_node->str = strdup(str);
		if (last_node->str == NULL)
		{
			free(last_node);
			return (NULL);
		}
		last_node->len = _strlen(str);
		last_node->next = NULL;

		if (*head == NULL)
		{
			*head = last_node;
			return (last_node);
		}
		else
		{
			while (first_node->next != NULL)
			{
				first_node = first_node->next;
			}
			first_node->next = last_node;
		}
	}
	return (last_node);
}
/**
 *_strlen - prints the length of a string
 *@s: input
 *Return: integer
 */
unsigned int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
