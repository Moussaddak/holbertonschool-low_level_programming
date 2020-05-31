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
	hash_node_t *node, *tmp;

	if (!(key && value && ht))
		return (0);
	hash_key = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[hash_key];
	/* update a key */
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	/* add a new slot */
	tmp = ht->array[hash_key];
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = tmp;
	ht->array[hash_key] = node;
	return (1);
}
