#include "main.h"
#include <unistd.h>

/**
* _puts - Prints a string followed by a newline.
*
* @str: Takes a string as argument.
*
* Return: Returns always 0.
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

