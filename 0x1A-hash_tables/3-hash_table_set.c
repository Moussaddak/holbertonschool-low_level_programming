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

	if (!(key && value && ht))
	{
		return (0);
	}
	hash_key = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[hash_key])
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[hash_key] = node;
		return (1);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		(ht->array[hash_key])->next = node;
		return (1);
	}
}
