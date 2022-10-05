#include "main.h"

/**
* _strdup -  returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
*
* @str: pointer to string given as parameter
*
* Return: pointer to the allocated space in memory
*/

char *_strdup(char *str)
{
	char *ptr, *temp;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	temp = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = temp;
	ptr = malloc(sizeof(char) * (len + 1));
	temp = ptr;

	if (ptr != NULL)
	{
		for (; i < len; i++)
		{
			ptr[i] = *str;
			str++;
		}
		ptr[i] = '\0';
		return (temp);
	}
	else
		return (NULL);
}
