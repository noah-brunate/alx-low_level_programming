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
	listint_t *new;
	listint_t *temp;

	(void)new;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	new = *head;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = temp;
	}
	return (*head);
}


