#include "lists.h"

/**
* sum_listint - returns sum of the data
* @head: pointer to node
*
* Return: returns sum or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}






