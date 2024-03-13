#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Function that free() dogs
 *@d: Struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
