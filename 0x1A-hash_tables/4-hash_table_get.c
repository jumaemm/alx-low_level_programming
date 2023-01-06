#include "hash_tables.h"

/**
 * hash_table_get - get value assoc with key
 * @ht: hash table to lookup
 * @key: key to be searched
 * Return: value assoc with key; NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL)
		return (NULL);

	/*Get the hashed index*/
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new_node = ht->array[index];
	/*compare nodes till keys match*/
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	if (new_node == NULL)
		return (NULL);

	return (new_node->value);
}
