#include "dog.h"
/**
 * init_dog - type struct dog.
 * @d: dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: no return.
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
