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
	list_t *new, *node;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	while (str[len])
		len++;
		new->len = len;
		new->next = NULL;
	if (!*head)
		*head = node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
	node->next = new;
	}
	return (new);
}

