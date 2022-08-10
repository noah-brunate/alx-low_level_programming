#include "main.h"
#include <string.h>

/**
* _strstr -> function locates a sub string
* @needle: substring
* @haystack: searched string
* Return: returns a pointer to the beginning of substring or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

