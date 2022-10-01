#include "main.h"

/**
* _strlen - A function to find the length of a string
*
* @str: A pointer to the input string whose length is to be calculated
*
* Return: Returns the length of the input string.
*/

int _strlen(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

