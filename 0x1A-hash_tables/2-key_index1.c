#include "hash_tables.h"

/**
* key_index - function generates index
* @key: string to generate index
* @size: size of the array
*
* Return: an index in the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 5381;
	unsigned long int c;

	while(c == *key++)
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash % size);
}


