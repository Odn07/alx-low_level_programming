#include "function_pointers.h"

/**
* print_name - A function that prints a name
*
* @name: pointer to name to print
* @f: function to pointer to print name
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

