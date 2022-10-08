#include "main.h"

/**
* _calloc - Allocates memory for an array using malloc.
*
* @nmemb: array elements
* @size: size in bytes of elements of the array
*
* Return: returns a pointer to the allocated memory or return
* NULL if nmemb or size is 0 or returns NULL if malloc fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(arr + i) = 0;
	}
	return (arr);
}
