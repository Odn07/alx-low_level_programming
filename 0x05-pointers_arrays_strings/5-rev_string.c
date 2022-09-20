#include "main.h"
#include <unistd.h>

/**
* rev_string - Reverse a string
*
*@s: string argument
*
*Return: Always 0
*/
void rev_string(char *s)
{
	char *strl = s;

	while (*strl)
	{
		strl++;
	strl -= 1;
	}
	while (strl)
	{
		_putchar(*s);
		strl--;
	}
	_putchar('\n');

}
