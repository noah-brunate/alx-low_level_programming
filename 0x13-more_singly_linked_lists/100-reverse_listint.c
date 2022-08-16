#include "lists.h"

/**
* reverse_listint - reverses a list
* @head: pointer to pointer
*
* Return: returns pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	current = *head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}




