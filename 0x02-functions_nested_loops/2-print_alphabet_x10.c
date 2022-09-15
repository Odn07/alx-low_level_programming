#include "main.h"
#include <unistd.h>
/**
* print_alphabet_x10: check main
*
*Description: function prints alphabet 10 time* es
*
* Return: Nothing
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
