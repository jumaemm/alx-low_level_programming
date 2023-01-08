#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to hash table
 * Return: always 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *temp_pointer = ht;
	hash_node_t *new_node, *temp_node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new_node = ht->array[i];
			while (new_node != NULL)
			{
				temp_node = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = temp_node;
			}
		}
	}
	free(temp_pointer->array);
	free(temp_pointer);
}
