#include "hash_tables.h"

/**
 *
 *
 *
 *
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i <= ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		if (i == ht->size)
		{
			free(ht->array);
		}
	}
	free(ht);
}