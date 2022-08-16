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
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}


