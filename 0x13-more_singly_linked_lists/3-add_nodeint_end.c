#include "lists.h"

/**
* add_nodeint_end - adds node at the end
* @head: pointer to pointer
* @n: node value
*
* Return: returns the address of the new element or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (*head != NULL)
	{
		*head = *head->next;
	}
	*head->next = temp;

	return (temp);
}


