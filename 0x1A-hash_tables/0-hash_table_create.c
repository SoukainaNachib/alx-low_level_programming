#include "hash_tables.h"

/**
 * hash_table_create - Function To Create a Hash Table
 * @size: Size Of The Array
 * Return: Null For Error or a Pointer To a New Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
