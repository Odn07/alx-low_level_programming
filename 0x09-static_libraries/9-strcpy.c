#include "main.h"

/**
* _strcpy - copies the string pointed to by src,
*including the terminating null byte (\0),
*to the buffer pointed to by* dest.
*
* @dest: Takes pointer to dest as parameter.
*@src: Takes pointer to src as parameter.
*
* Return: Return the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}

