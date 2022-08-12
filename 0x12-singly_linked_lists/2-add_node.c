#include "lists.h"

/**
* add_node - function adds a new node at the beginning
* @head: pointer to apointer
* @str: node string
* Return: returns the address of the new element or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[len])
		len++;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}


