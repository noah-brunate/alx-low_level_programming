#include "lists.h"

/**
* print_list -> prints all the elements
* @h: singly linked lists
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int i = 0;
	size_t nelem = 0;

	while (h != '\0')
	{
		if (h->str != '\0')
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", i, "(nil)");
		}
	h = h->next;
	nelem++;
	}
	return (nelem);
}



