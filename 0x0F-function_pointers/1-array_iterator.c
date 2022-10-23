#include "function_pointers.h"

/**
* array_iterator - A function that executes a function
* given as a parameter on each element of an array
*
* @array: array of elements
* @size: size of array
* @action: function pointer
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}