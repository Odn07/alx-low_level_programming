#include "main.h"

/**
* _strcmp - compare two string.
*
* @s1: pointer to the first string.
* @s2: pointer to the second string.
*
* Return: Return 0 if strings are equal;
* negative if first string is shorter;
* and positive if first string is longer.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}

