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
	int len = 0, i = 0;
	char *buff = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (buff);
}
