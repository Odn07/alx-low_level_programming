#include "main.h"

/**
* *malloc_checked - Allocates memory using malloc
*
* @b: positive interger argument
*
* Return: a void pointer to the allocated memory.
*
*/

void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
