#include "main.h"

/**
* _puts_recursion - print a string followed by a newline.
*
* @s: pointer to input string.
*
* Return: return void.
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}

