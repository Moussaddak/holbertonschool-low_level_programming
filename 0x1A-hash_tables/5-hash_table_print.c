#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;

	if (!ht)
		printf("NULL\n");
	for (i = 0; i < ht->size; i++)
	{
		printf("{");
		if (ht->array[i])
		{
			tmp = ht->array[i]->next;
			printf("'%s': '%s'", ht->array[i]->key,
			       ht->array[i]->value);
		}
		while (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
