#include<stdio.h>

/**
* main - entry point
*
* Return: always return 0
*
*/
int main(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j);
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

