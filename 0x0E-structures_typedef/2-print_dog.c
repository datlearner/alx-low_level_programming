#include "dog.h"
#include <stdio.h>
/**
 * print_dog - struct dog.
 * @d: struct dog
 * Return: no return.
 */
void print_dog(const struct dog *d)
{
if (!d)
{
printf("no infor provided.\n");
return;
}
printf("Name: %s\nAge: %f\nOwner: %s\n",
(d->name) ? d->name : "(nil)",
d->age,
(d->owner) ? d->owner : "(nil)");
}
