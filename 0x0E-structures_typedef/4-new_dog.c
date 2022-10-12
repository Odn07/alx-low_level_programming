#include "dog.h"

/**
* new_dog - A function that creates a new dog
*
* @name: dog's name
* @age: dog's age
* @owner: dog's owner's name
*
* Return: return a pointer to struct of type dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	dog_ptr = malloc(sizeof(dog_t));

	if (dog_ptr == NULL)
	{
		return (NULL);
	}

	dog_ptr -> name = name;
	dog_ptr -> age = age;
	dog_ptr -> owner = owner;
	return (dog_ptr);		
}

