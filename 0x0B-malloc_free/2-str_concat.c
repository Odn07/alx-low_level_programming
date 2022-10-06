#include "main.h"
#include <stdlib.h>

/**
* str_concat - A function that initializes an array of chars,
* and initialize it with a specific char.
*
* @s1: pointer to input string
* @s2: pointer to input string
*
* Return: pointer to the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *cat_str;

	cat_str = malloc(300 * sizeof(char));

	if (cat_str == NULL)
	{
		return (NULL);
	}
	else
	{
		cat_str = s1;

		while (*s2 && *cat_str++ != '\0')
		{
			*cat_str++ = *s2++;
		}
		*cat_str = '\0';
		return (s1);
	}
}
