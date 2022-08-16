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

	listint_t *h;

	listint_t *temp = *head;

	i = temp->n;
	h = temp->next;

	if (*head == NULL)
		return (0);

	free(temp);
	*head = h;

	return (i);
}






