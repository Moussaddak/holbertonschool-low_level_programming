#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of @size element
 * @size: slot / bucket number
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **h_array;
	unsigned long int i;

	if (size > 0)
	{
		table = malloc(sizeof(hash_table_t));

		if (!table)
		{
			return (NULL);
		}
		else
		{
			h_array = malloc(sizeof(hash_node_t) * size);
			if (!h_array)
			{
				free(table);
				return (NULL);
			}
			else
			{
				for (i = 0; i < size; i++)
				{
					h_array[i] = NULL;
				}
				table->size = size;
				table->array = h_array;
				return (table);
			}
		}
	}
	else
	{
		return (NULL);
	}
}
