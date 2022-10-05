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

	cat_str = malloc(200 * sizeof(char));

	if (cat_str == NULL)
	{
		return (NULL);
	}
	else
	{
		cat_str = s1;

		while (*s1)
		{
			s1++;
		}
		while (*s2)
		{
			*s1++ = *s2++;
		}
		*s1 = '\0';
		return (cat_str);
	}
}
