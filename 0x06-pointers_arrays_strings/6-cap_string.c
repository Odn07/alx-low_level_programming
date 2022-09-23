#include "main.h"

/**
* cap_string - capitalizes all words of a string.
*
* @s: a pointer to a string to capitalize.
*
* Return: pointer to s
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (get_seperator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}






/**
* get_seperator - check for special characters.
*
* @c: takes a special character as argument.
*
* Return: 1 if there is seperator in string;
* and 0 if there is none.
*/
int get_seperator(char c)
{
	int i = 0;
	char special_character[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == special_character[i])
			return (1);
	}
	return (0);
}


