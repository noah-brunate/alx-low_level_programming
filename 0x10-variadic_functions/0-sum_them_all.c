#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all -> variadic function sums all its arguments
* @n: number of arguments
* Return: return sum and 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n != 0)
		{
			sum += va_arg(ap, int);
			return (sum);
		}
		else
		{
			return (0);
		}
	va_end(ap);
	}
	return (0);
}
/**
* main -> entry point
* Return: 0
*/
int main(void)
{
	for (i = 0; i < n; i++)
	{
		sum_them_all(n);
		_putchar(sum + '0');
	}
	_putchar('\n');
	return (0);
}


