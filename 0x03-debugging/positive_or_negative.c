#include <stdio.h>
#include "main.h"

/**
* postitive_or_negative - Takes an integer and determine
* if it is positive or negative and then output result
* @i: positive or negative integer
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i >= 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);

}
