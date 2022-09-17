#include <ctype.h>
#include "main.h"

/**
* _isdigit - Checks for digit 0 through 9.
*
* @c: Digit to check.
*
* Return: Return 1 if digit, otherwise 0.
*/
int _isdigit(int c)
{
	int num;

	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
		{
			num = 1;
		}
		else
		{
			num = 0;
		}
}
	return (num);
}
