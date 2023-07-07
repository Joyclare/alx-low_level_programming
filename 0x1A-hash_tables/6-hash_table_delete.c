#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: pointer to a hash table
 * Author - Joyclare Cherono
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int z;

	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			node = ht->array[z];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}