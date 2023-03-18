#include "lists.h"

/**
* dlistint_len - function returns number of elements
* @h: pointer to head node
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *head = h;

	while (head != NULL)
	{
		size++;
		head = head->next;
	}
	return size
}

