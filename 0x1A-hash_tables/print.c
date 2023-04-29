#include "hash_tables.h"

/**
* print_table - function prints table
* @ht: pointer to the table
*
* Return: nothing
*/
void print_table(hash_table_t *ht)
{
	int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("%d\n, %s\n, %s" i, ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
			{
				printf("%d\n, %s\n, %s" i, ht->array[i]->next->key, ht->array[i]->next->value);
			}
		}
	}
}
