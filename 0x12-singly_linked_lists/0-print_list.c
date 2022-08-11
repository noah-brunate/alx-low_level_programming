#include "lists.h"

/**
* print_list -> prints all the elements
* @h: singly linked lists
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != '\0')
	{
		if (h->str == '\0')
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



