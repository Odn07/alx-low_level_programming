#include "main.h"
#include <ctype.h>

/**
* int _isupper(int c) - Test if a character is uppercase or otherwise.
*
* @c: Character to be tested.
*
* Return: Returns 1 if uppercase and 0 if otherwise
*/
int _isupper(int c)
{
	int flag;

	if (isupper(c))
	{
		flag = 1;
	}
	else
	{
		flag = 0;
	}
	return (flag);
}
