#include "main.h"

/**
* _memset - fills memory with constat byte.
*
* @s: a pointer the memory area to filled
* @b: constant byte.
* @n: size of memory area to fill.
*
* Return: returns a pointer to s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	
	while (n--)
	{
		*s++ = b;
	} 
	return (p);
}
