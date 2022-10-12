#include "dog.h"

/**
* init_dog - A function that initialize a variable of type struct dog
*
* @d: initialized variable type struct
* @name: pointer to input string name
* @age: pointer to the variable age
* @owner: pointer to the variale owner
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
