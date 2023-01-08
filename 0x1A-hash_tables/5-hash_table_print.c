#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 * Return: Always 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node;
	int flag_check = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			/*check if the flag for checking commas is triggered*/
			if (flag_check == 1)
				printf(", ");

			new_node = ht->array[i];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			flag_check = 1;
		}
	}
	printf("}\n");
}
