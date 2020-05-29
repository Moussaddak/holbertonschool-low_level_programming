#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of @size element
 * @size: slot / bucket number
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table, *h_array;

	if (size > 0)
	{
		table = malloc(sizeof(hash_table_t));

		if (!table)
		{
			return (NULL);
		}
		else
		{
			h_array = malloc(sizeof(hash_table_t) * size);
			if (!h_array)
			{
				free(table);
				return (NULL);
			}
			else
			{
				return (table);
			}
		}
	}
	else
	{
		return (NULL);
	}
}
