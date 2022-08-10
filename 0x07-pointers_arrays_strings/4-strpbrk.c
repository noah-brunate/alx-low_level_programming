#include "main.h"
#include <string.h>

/**
* _strpbrk -> function searches a string for any set of bytes
* @s: string being searched
* @accept: string we are searching for
*
* Return: return a pointer to the bytes in s or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
		return (strpbrk(s, accept));
}

