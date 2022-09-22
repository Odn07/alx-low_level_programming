#include "main.h"

/**
* _strncat - Concatenates two string.
*
* @dest: Takes a pointer to the destination string.
* @src: Takes a pointer to the source string.
* @n: n bytes.
* Return: Return a pointer to the destination string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
