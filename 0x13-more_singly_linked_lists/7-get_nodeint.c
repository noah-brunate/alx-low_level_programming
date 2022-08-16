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
	int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}


