#include "lists.h"

/**
* list_len - function returns number of elements
* @h: pointer to nodes
*
* Return: returns number of elements
*/
size_t list_len(const list_t *h)
{
	int nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}


