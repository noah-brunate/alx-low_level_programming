#include "lists.h"

/**
* get_nodeint_at_index - returns nth nod
* @head: pointer to node
* @index: index of the node
*
* Return: returns nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	listint_t *temp = head;

	int i;

	if (!temp)
		return (NULL);

	for (i = 0; i < (index + 1); i++)
	{
		temp = temp->next;
		if (i == index)
		{
			return (temp);
		}
	}
}


