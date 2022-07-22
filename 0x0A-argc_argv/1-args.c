#include "stdio.h"

/**
* main -> this is a function to print its name
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0 for success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv - 1);
	return (0);
}

