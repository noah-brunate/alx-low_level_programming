#include "lists.h"

/**
* print_list -> prints all the elements
* @h: singly linked lists
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int nelem;

	nelem = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nelem++;
	}
	return (nelem);
}


