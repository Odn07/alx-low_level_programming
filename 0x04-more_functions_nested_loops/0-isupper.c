#include "main.h"
#include <ctype.h>

/**
* _isupper - Check if a character is uppercase or otherwise.
*
* @c: Character to be tested.
*
* Return: Returns 1 if uppercase, 0 if otherwise
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
