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
	unsigned int i = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (index >= i)
	{
		return (NULL);
	}

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}


