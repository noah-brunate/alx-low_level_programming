#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at a given index
* @head: pointer to pointer
* @index: index of the node to delete
*
* Return: returns 1 if it succeedes or -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *temp;

	if (index)
	{
		for (i = 0; i < index; i++)
		{
			*head = (*head)->next;
		}

	temp = (*head)->next;
	(*head)->next = temp->next;
	free(temp);

	return (1);
	}
	else
		return (-1);
}



