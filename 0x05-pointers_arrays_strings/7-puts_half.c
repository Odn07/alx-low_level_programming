#include "main.h"
#include <unistd.h>

/**
* puts_half - Prints half of a string
*
* @str: takes a pointer to a string as a parameter
*
* Return: Return always 0
*/

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i;
	int n;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

