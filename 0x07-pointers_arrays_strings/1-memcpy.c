#include "main.h"

/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
*
* @dest: Memory area dest
* @src: source string
* @n: n bytes of memory to be copied.
*
* Return: return a pointer dest
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destl = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (destl);
}


