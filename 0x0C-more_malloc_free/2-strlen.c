#include "main.h"

/**
* _strlen - Returns the length of a string.
*
* @s: Takes a pointer to string as para.
*
* Return: Return the length of a string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
