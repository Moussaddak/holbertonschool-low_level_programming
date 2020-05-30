#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 1;
	hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp == NULL)
			continue;
		else if (flag)
		{
			flag = 0;
			printf("'%s': '%s'", tmp->key,
			       tmp->value);
			tmp = tmp->next;
		}
		else
		{
			printf(", '%s': '%s'", tmp->key,
			       tmp->value);
			tmp = tmp->next;
		}
		while (tmp)
		{
			printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
