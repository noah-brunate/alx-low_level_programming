#include "main"
/**
* print_last_digit -> prints the last digit
* @n: the passed args
* Return: the last digit
*/
int print_last_digit(int)
{
	int x;

	if (n > 0)
	n = -n;
	x = n % 10;
	_putchar(x + '0')
	return (x);
}
