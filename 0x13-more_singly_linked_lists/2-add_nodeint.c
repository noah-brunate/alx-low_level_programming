#include "lists.h"

/**
* add_nodeint - aadd a node at the beginning
* @n: param
* @head: pointer to pointer
*
* Return: returns address of new element or NUUL if it falied
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp->next = *head;
	*head = temp;

	return (temp);
}



