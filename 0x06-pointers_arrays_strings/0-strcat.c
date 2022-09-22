#include "main.h"

/**
* _strcat - Concatenates two strings.
*
* @dest: Takes a pointer to the destination string as parameter.
* @src: Takes a pointer to the source string as second perameter.
*
* Return: Returns a pointer to the destination string.
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
