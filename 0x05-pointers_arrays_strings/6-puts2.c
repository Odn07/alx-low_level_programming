#include "main.h"
#include <unistd.h>

/**
* puts2 - prints every other character of a string
*
* @str: Takes pointer to a string as parameter
*
* Return: Return always 0.
*/

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

