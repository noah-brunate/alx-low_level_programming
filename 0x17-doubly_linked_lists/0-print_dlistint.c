#include "lists.h"

/**
* print_dlistint - function prints elements in a list
* @h: pointer to head node
*
* Return: returns the number of nodee
*/
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;
	dlistint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		size++;
		head = head->next;
	}
	return size
}

