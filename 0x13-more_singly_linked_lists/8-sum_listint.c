#include "lists.h"

/**
* sum_listint - returns sum of the data
* @head: pointer to node
*
* Return: returns sum or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	int sum = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
	return (sum);
}






