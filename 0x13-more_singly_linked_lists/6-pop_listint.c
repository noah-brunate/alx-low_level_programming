#include "lists.h"

/**
* pop_listint - deletes head node
* @head: pointer to pointer
*
* Return: returns the node's data or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	int i;

	listint_t *temp = *head;

	i = temp->n;
	if (*head == NULL)
		return (0);

	*head = temp->next;
	free(temp);
	return (i);
}




