#include "main.h"

/**
* swap_int - swaps the value of two intergers.
*
* @a: A pointer to an int a.
* @b: A pointer to an int b.
*
* Return: Return always 0.
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
