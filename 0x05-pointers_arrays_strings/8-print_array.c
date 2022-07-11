#include "main.h"
/**
* void print_array -> prints elements
* @a: parameter1
* @n: parameter2
* Return: elements of an array of integers
*/
void print_array(int *a, int n)
{
	int [n];
	int i, j;

	for (i = 0; i < n; i++)
	{
		[i] = i;
	}
	for (j = 0; j < n; j++)
	{
		_putchar("Element[%d] = %d, \n", j, [j]);
	}
	_putchar('\n');
	return (0);
}

