#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
char a;
for (a = 'a'; a <= '2' ; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
putchar('\n);
return (0);
}

