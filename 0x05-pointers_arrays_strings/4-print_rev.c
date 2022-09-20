#include "main.h"
#include <unistd.h>

/**
* print_rev - Prints a string in reverse
*
* @s: Takes a string as argument
*
* Return: Return always 0.
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
