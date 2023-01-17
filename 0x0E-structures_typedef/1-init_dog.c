#include "dog.h"

/**
 * main - initializes struct dog
 * @ name: dog name
 * @age: dog age
 * @owner: dog owner
 * @d: struct dog pointer
 * Return 0 on succes
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (0);
}
