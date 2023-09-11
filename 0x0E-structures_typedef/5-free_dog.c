#include "dog.h"

/**
 * free_dog - delete dog.
 * @d: struct dog.
 * Return: no return.
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
