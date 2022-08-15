#include "lists.h"

/**
* free_listint2 - frees list
* @head: pointer to pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(temp->next);
	}
	*head = NULL;
}


