#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora korpar, 2015-10-19",
 * followed by a new line, to the standard error
 * Return: Always 0 (success)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
return (1);
}
