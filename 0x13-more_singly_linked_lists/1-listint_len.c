#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: header to node
*
* Return: returns number of elements in list
*/
size_t listint_len(const listint_t *h)
{
	int size;

	while (h != NULL)
	{
		size++;
	}
	return (size);
}




