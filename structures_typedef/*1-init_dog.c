#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 *
 * Description: This function assigns the provided name, age,
 * and owner values to the corresponding members of the struct dog
 * pointed to by d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	 if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
