#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 1;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (t->array[i] != NULL && flag)
		{
			tmp = ht->array[i]->next;
			flag = 0;
			printf("'%s': '%s'", ht->array[i]->key,
			       ht->array[i]->value);
		}
		else if (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			printf(", '%s': '%s'", ht->array[i]->key,
			       ht->array[i]->value);
		}
		while (tmp)
		{
			printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
