#include "lists.h"

/**
* print_listint - prints all elements of a list
* @h: pointer to struct node
*
* Return: return number of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	const listint_t *temp = h;

	while (temp)
	{
		printf("%d", temp->n);
		temp = temp->next;
		size++;
	}
	return (size);
}

