#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table
 *@key: the key
 *@value: the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_key;
	hash_node_t *node;

	if (!(key && value))
	{
		return (0);
	}
	hash_key = key_index(key, ht->size);
	if (!(ht->array[hash_key])->key)
	{
		(ht->array[hash_key])->key = strdup(key);
		(ht->array[hash_key])->value = strdup(value);
		(ht->array[hash_key])->next = NULL;
		return (1);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
		{
			return (0);
		}
		else
		{
			node->key = strdup(key);
			node->value = strdup(value);
			node->next = NULL;
			(ht->array[hash_key])->next = node;
			return (1);
		}
	}
}
