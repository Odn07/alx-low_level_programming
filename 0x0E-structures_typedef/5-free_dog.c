#include "dog.h"

/**
* free_dog - a function that frees dog
*
* @d: a pointer variable type struct dog_t
*
* Return: void
*/

void free_dog(dog_t *d)
{
	free(d);
}
