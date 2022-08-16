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

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	h = *head;
	free(temp);
	*head = (*head)->next;

	return (i);
}






