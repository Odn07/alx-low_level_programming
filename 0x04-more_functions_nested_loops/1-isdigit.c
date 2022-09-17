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
	char i;
	int isdigit;

	for (i = 0; i < 9; i++)
	{
		if (isdigit(c))
		{
			isdigit = 1;
		}
		else
		{
			isdigit = 0;
		}
	}
	return (isdigit);
}
