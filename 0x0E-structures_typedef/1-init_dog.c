#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Variable to initialize.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			exit(0);
	d->name = name;
	d->age = age;
	d->owner = owner;

}
