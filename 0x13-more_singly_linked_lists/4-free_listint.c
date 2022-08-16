#include "lists.h"

/**
* free_listint - frees a list
* @head: pointer to node
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head->next);
	}
	free(head);
}

