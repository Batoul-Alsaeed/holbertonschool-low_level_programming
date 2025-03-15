#include <stddef.h> /* Include this to define NULL */
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function assigns values to a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* Ensure d is not NULL before using it */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
