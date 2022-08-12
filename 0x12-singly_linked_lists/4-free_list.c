#include "lists.h"

/**
* free_list -> function frees node memory
* @head: pointer to node
*/
void free_list(list_t *head)
{
	if (head)
		free(head);
}

