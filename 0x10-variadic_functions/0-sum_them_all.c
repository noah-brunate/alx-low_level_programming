#include "variadic_functions.h"

/**
* sum_them_all -> variadic function sums all its arguments
* @n: number of params
* Return: return sum if successfull or 0 if n == 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i,  sum = 0;

	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);
	for (i = 0; i < n; i++)
			sum += va_arg(arglist, int);

	va_end(arglist);

	return (sum);
}


