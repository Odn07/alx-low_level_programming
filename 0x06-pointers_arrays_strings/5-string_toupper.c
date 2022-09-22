#include "main.h"

/**
* string_toupper - changes all lowercase letters of string
* to uppercase.
*
* @s: pointer to input string.
*
* Return: Return reversed string.
*/

char *string_toupper(char *s)
{
	char *str_input = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (str_input);
}

