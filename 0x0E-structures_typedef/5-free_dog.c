#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: struct dog pointer
 * Return: no ret
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
