#include "hash_tables.h"

/**
 * hash_table_print - Function that print the different key and values to ht
 * @ht: hash_table_t hash table to print
 *
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, j = 0;

	for (i = 0; ht && i <= ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (j == 0)
			{
				printf("{");
				j++;
			}
			if (i != ht->size && j == 2)
				printf(", ");
			j = 2;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
		if (i == ht->size && j != 0)
			printf("}\n");
	}
	if (j == 0)
		printf("{}\n");
}
