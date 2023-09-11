#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores dog info
 * @name: name
 * @age: age
 * @owner: owner
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
