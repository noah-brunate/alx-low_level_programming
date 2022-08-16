#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: header to node
*
* Return: returns number of elements in list
*/
size_t listint_len(const listint_t *h)
{
	size_t size;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}




