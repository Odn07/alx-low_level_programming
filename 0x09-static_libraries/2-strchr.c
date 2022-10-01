#include "main.h"

/**
* _strchr - locates a character in a string
*
* @s: source string.
* @c: character to be located.
* Return: a pointer to the source string
*/

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
