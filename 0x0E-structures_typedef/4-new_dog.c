#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, n = 0, o = 0;

	d = malloc(sizeof(*d));
	if (d == NULL || !name || !owner)
	{
		free(d);
		return (NULL);
	}
	while (name[n] != '\0')
		n++;
	while (owner[0] != '\0')
		o++;
	d->name = malloc(n + 1);
	d->owner = malloc(o + 1);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		d->name[i] = name[i];
	d->age = age;
	for (i = 0; i < o; i++)
		d->owner[i] = owner[i];
	return (d);
}