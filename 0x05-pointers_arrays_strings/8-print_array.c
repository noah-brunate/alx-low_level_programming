#include "main.h"
/**
* void print_array -> prints elements
* @a: parameter1
* @n: parameter2
* Return: elements of an array of integers
*/
void print_array(int *a, int n)
{
	int x[n];
	char i, j;

	for (i = 0; i < n; i++)
	{
		x[i] = i;
	}
	for (j = 0; j < n; j++)
	{
		_putchar("Element[%d] = %d, \n", j, x[j]);
	}
	_putchar('\n');
	return (0);
}

