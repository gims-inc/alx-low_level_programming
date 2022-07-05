#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dogptr;
	int namelen, ownerlen, i;
	char *n, *o;

	dogptr = malloc(sizeof(struct dog));
	if (dogptr == NULL)
		return (NULL);

	for (namelen = 0; name[namelen] != '\0'; namelen++)
		;
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
		;

	n = malloc(sizeof(char) * namelen + 1);
	if (n == NULL)
	{
		free(dogptr);
		return (NULL);
	}
	o = malloc(sizeof(char) * ownerlen + 1);
	if (o == NULL)
	{
		free(n);
		free(dogptr);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		n[i] = name[i];
	for (i = 0; i <= ownerlen; i++)
		o[i] = owner[i];

	dogptr->name = n;
	dogptr->age = age;
	dogptr->owner = o;

	return (dogptr);
}
