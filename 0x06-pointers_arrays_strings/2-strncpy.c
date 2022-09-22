#include "main.h"

/**
* _strncpy - Copies string.
*
* @dest: A pointer to the destination.
* @src: A pointer to the source string.
* @n: Number of bytes or character to copy.
*
* Return: Returns a pointer to the destination
* where string is copied to.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\n' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\n';
	}
	return (dest);
}
