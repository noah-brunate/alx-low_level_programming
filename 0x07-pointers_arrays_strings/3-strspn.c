#include "main.h"
#include <string.h>

/**
* _strspn -> gets the length of a prefix substring
* @accept: string to find
* @s: string to search
*
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

