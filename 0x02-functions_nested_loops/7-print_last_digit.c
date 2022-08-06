#include "main.h"

/**
* print_last_digit -> prints the last digit
* @n: the passed args
* Return: the last digit
*/

int print_last_digit(int n)
{
	long int last_digit;

	if (n < 0)
		n *= -1;
	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}

