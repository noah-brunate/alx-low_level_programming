#include "main.h"

/**
*  print_line -> this is a function to print a stright line
* @n: integer params
*/
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');

	if (x <= 0)
	{
		_putchar('\n');
	}
}

