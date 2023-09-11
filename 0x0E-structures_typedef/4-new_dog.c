#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog, if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, n = 0, o = 0;

	new = malloc(sizeof(*new));
	if (new == NULL || !name || !owner)
	{
		free(new);
		return (NULL);
	}
	while (name[n] != '\0')
		n++;
	new->name = malloc(n + 1);
	while (owner[o] != '\0')
		o++;
	new->owner = malloc(o + 1);
	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	for (i = 0; i <= n; i++)
		new->name[i] = name[i];
	new->age = age;
	for (i = 0; i <= o; i++)
                new->owner[i] = owner[i];
	return (new);
}
