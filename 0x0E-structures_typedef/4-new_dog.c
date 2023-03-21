#include "dog.h"
#include "stdlib.h"
#include "string.h"

/**
 * *new_dog - creates a new dog struct
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new_dog at success, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_cpy = (char *)malloc(strlen(name) + 1);

	if (name_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}

	owner_cpy = (char *)malloc(strlen(owner) + 1);

	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}

	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);
}
