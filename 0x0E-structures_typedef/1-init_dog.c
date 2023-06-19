#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this initializes a variable of type struct dog
 * @d: represents the pointer to struct dog to initialize
 * @name: represents the name to initialize
 * @age:represents the age to initialize
 * @owner: represents the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
