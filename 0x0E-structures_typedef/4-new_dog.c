#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *k_dog;
int i, ln, lw;
k_dog = malloc(sizeof(*k_dog));
if (k_dog == NULL || !(name) || !(owner))
{
free(k_dog);
return (NULL);
}
for (ln = 0; name[ln]; ln++)
;
for (lw = 0; owner[lw]; lw++)
;
k_dog->name = malloc(ln + 1);
k_dog->owner = malloc(lw + 1);
if (!(k_dog->name) || !(k_dog->owner))
{
free(k_dog->owner);
free(k_dog->name);
free(k_dog);
return (NULL);
}
for (i = 0; i < ln; i++)
k_dog->name[i] = name[i];
k_dog->name[i] = '\0';
k_dog->age = age;
for (i = 0; i < lw; i++)
k_dog->owner[i] = owner[i];
k_dog->owner[i] = '\0';
return (k_dog);
}
