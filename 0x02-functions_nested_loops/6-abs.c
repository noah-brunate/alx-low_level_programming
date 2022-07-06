#include "main.h"
/**
* _abs -> return absolute value of a number
* @n: takes integer as in put
* Return: absolute value of a number
*/
int _abs(int n)
{
	int n;

	if (n < 0)
		return (n = n * (-1));
	else
		return (n);
}

