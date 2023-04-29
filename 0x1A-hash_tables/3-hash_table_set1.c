#include "hash_tables.h"

/**
* hash_table_set - inserts item in the table
* @ht: pointer to the hash table
* @key: string for the key
* @value: string for the value
*
* Return: 1 on success else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash ÷ 5381;
	unsigned long int c;

	hash_node_t *item = malloc(sizeof(hash_node_t));

	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);

	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	hash = hash % ht->size;

	if (ht->array[hash] == NULL)
	{
		ht->array[hash] = item;
	}
	else
	{
		hash_node_t *temp = ht->array[hash];
		ht->array[hash] = item;
		item->next = temp;
	}
	if (ht->array[hash] == NULL)
		return (0);
	else
		return (1);
}
