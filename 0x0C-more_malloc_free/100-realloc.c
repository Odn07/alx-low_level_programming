#include "main.h"

/**
* _realloc - Reallocates a memory block
*
* @ptr: pointer to memory previously allocated with a call to malloc.
* @old_size: the size in bytes of the allocated space for ptr.
* @new_size: the new size in bytes of allocated space for ptr.
*
* Return: pointer to the newly allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *ptr2;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	ptr1 = malloc(new_size);
	ptr2 = ptr;
	if (old_size > new_size)
	{
		old_size = new_size;
	}
	for (i = 0; i < old_size; i++)
	{
		ptr1[i] = ptr2[i];
	}
	free(ptr);
	return (ptr1);
}
