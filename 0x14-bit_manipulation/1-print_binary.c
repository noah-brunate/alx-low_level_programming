#include "main.h"

/**
* print_binary - function prints binary
* @n: param
*/
void print_binary(unsigned long int n)
{
	unsigned int i;

	while (n != 1)
	{
		if ((n % 2) != 0)
		{
			_putchar('1');
			n = (n - 1) / 2;
		}
		if ((n % 2) == 0)
		{
			_putchar('0');
			n = n / 2;
		}
	}
}


