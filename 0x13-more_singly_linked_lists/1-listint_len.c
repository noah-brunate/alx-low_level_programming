#include "lists.h"

/**
* listint_len - returns the number of elements
* @h: header to node
*
* Return: returns number of elements in list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}




