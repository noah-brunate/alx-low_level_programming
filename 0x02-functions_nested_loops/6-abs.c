#include "main.h"

/**
* _abs -> return absolute value of a number
* @n: takes integer as in put
* Return: 0 for failure
*/

int _abs(int n)
{
	if (n < 0)
		return (n = n * (-1));
	else
		return (n);
}

