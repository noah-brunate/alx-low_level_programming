#include "lists.h"

/**
* insert_nodeint_at_index - inserts node at given position
* @head: pointer to pointer
* @idx: index of the list to add a new node
* @n: node value
*
* Return: return address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	if (!temp)
		return (NULL);

	if (idx)
	{
		listint_t *p = *head;

		for (i = 0; i < idx - 1; idx++)
		{
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
	else
	{
		return (NULL);
	}
	return (temp);
}


