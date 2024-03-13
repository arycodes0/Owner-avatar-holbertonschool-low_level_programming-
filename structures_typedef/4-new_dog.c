#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	size_t name_len = strlen(name) + 1;
	size_t owner_len = strlen(owner) + 1;

	n_dog->name = malloc(name_len);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->owner = malloc(owner_len);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	memcpy(n_dog->name, name, name_len);
	memcpy(n_dog->owner, owner, owner_len);
	n_dog->age = age;

	return (n_dog);
}
