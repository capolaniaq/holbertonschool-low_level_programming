#include "hash_tables.h"

/**
 * hash_table_set - function that insert the node in de index and linked-list
 * @ht: hash_table_t
 * @key: const char pointer
 * @value: const char pointer
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->key);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(ht);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		node->next = NULL;
	}
	else
	{
		node->next = tmp;
		ht->array[index] = node;
	}
	return (1);
}
