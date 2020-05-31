#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: hash table
 *@key: the key
 *Return: Returns the value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int h_index;
	hash_node_t *node;

	if (!(ht && key))
		return (NULL);
	h_index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[h_index];
	/* search for the key */
	while (node)
	{
		if (!strcmp(node->key, key))
		{
			return (node->value);
		}
		node = node->next;
	}
	/* if key not found or slot is null */
	return (NULL);
}
