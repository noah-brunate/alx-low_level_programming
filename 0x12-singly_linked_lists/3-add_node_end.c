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
	list_t *new, *ptr;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	ptr = *head;
	while (ptr != NULL)
		new->len = len;
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}

