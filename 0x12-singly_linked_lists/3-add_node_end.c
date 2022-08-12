#include "lists.h"

/**
* add_node_end - function adds node at end
* @head: head pointer
* @str: string pointer
*
* Return: return pointer to the new element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (node->next)
		node = node->next;

	node->next = new;

	return (new);
	}
}



