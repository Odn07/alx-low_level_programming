#include "main.h"
#include <stdio.h>

/**
* print_array - Returns n elements of an array of intergers
*
* @a: A point to an interger
* @n: Number of elements in the array
*
* Return: Return always 0
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}

