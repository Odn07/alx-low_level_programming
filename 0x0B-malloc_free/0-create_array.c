#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and
* initializes it with a specific char
*
* @size: size of the array
* @c: Char to initiaze array with.
*
* Return: a pointer to the specific char
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

