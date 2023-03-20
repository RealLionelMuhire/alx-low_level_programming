#include "dog.h"
#include "stdlib.h"

/**
 * init_dog - initialise structure called dog
 * @d: object type of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: always 0 at success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
