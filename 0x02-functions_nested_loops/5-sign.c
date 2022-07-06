#include "main.h"
/**
* print_sign -> prints sign based on condition
* @n: argument passed
* Return: 1, 0, -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_purchar('+');
	return ('1');
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-1');
	return (-1);
	}
}
