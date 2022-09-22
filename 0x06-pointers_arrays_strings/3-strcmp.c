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
	int i, j, result;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] < s2[j])
			{
				result = -15;
			}
			else if (s1[i] == s2[j])
			{
				result = 0;
			}
			else
			{
				result = 15;
			}
		}
	}
	return (result);
}

