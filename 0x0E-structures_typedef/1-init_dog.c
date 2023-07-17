#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializ a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: initialize name
 * @age: initialize age
 * @owner: initialize owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
