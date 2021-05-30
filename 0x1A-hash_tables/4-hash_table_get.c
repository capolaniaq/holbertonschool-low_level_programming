#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated to key
 * @ht: hash_table_t to seek inside
 * @key: conts char pointer to indicated the key to search
 *
 * Return: the Value associated with the element, or NULL if
 * key couldn't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;
	char *value;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = strdup(tmp->value);
			free(tmp);
			return (value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
